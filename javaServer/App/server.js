const express = require('express');
const fileUpload = require('express-fileupload');
const { exec } = require('child_process');
const fs = require('fs');
const app = express();
const port = 3000;

app.use(fileUpload());

app.post('/executeCProgram', (req, res) => {
  if (!req.files || !req.files.javaFile) {
    return res.status(400).send('No file uploaded.');
  }

  // Get the uploaded C program file
  const javaFile = req.files.javaFile;

  // Optional input for the C program
  const input = req.body.input ? req.body.input.split(',').join('\n') : '';
  // console.log(input);
  // console.log(typeof(input));

  // Save the C program file to a temporary location
  const filePath = req.body.className ? `${req.body.className}.java` : 'main.java';
//   const filePath = 'main.java';
  javaFile.mv(filePath, (err) => {
    if (err) {
      return res.status(500).send('Error saving the uploaded file.');
    }

    // Create a temporary input file
    fs.writeFile('temp_input.txt', input, (inputErr) => {
      if (inputErr) {
        return res.status(500).send('Error creating input file.');
      }

      // Compile and execute the C program, using the input file if provided
    //   const command = `g++ ${filePath} -o temp && ${
    //     input ? `./temp < temp_input.txt` : './temp'
    //   }`;
    //   const command = `${input? `python3 ${filePath} < temp_input.txt` : `python3 ${filePath}`}`;
    const command = `javac ${filePath} && java ${filePath.replace('.java', '')} ${
        input ? `< temp_input.txt` : ''
      }`;

      exec(command, (error, stdout, stderr) => {
        if (error) {
          return res.status(500).send(stderr || 'Error executing C program.');
        }
        fs.unlinkSync(filePath);
        // fs.unlinkSync('main.class');
        fs.unlinkSync(`${req.body.className}.class`);
        fs.unlinkSync('temp_input.txt');
        res.send(stdout);
      });
    });
  });
});

app.listen(port, () => {
  console.log(`Server is listening on port ${port}`);
});
