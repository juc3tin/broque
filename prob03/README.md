# Copy File
In this program, you will be using C++ programming constructs, such as files and loops.

## main.cpp
Write a program that reads from a file line by line, and copies each line into a new file.

The only thing you need to add to `main()` is the call to the function that copies a file. All of the rest of the work will be in the function `copyFile()`

The `copyFile()` function receives 2 parameters, representing the names of the input file and output file. This function will copy all contents from the input file and write it to the output file.
1. The function prototype for this function has been provided at the top of the file `main.cpp`
   - You can use this function prototype as a model to create the definition for the function *(e.g. the function header is identical to the function prototype, other than the final semicolon)*
   - Place the function definition at the bottom of the file `main.cpp`
1. This function will output a message to the user if the input file does not exist

## Constants
The following constants have been defined for you in `main()`
1. The name of the input file, set to *input_file.txt*
1. The name of the output file, set to *output_file.txt*

## Input Validation
1. The function `copyFile()` must check to be sure the input file exists

# Hints
1. Read in one line of text at a time using `getline()`
   - As soon as the function reads in a line from the input file, it can immediately print that line to the output file
1. Because the program does not know how many lines of text are in the input file, it must continue looping until the end of file is reached
   - *Note: see week 9 lecture slides on reading from a file until the end of file (EOF) is hit*

# Sample Output
Your program will not prompt the user for any values, but will output a message indicating whether the file copy was successful.

## Sample Output #1
```
Input file has been copied to: output_file.txt
```

After you have run your program, the file *output_file.txt* should now contain an identical copy of the contents of the file *input_file.txt*.

You can view the file contents in Atom or by using the `cat` command in a Terminal window.
```
cat output_file.txt
```
Compare the output of the two files to be sure they match.
```
cat input_file.txt
```

## Sample Output #2
*This sample shows the error message when trying to read from a file that does not exist. You will need to delete input_file.txt in order to test this case.*

You can delete this file by using the `mv` command in a Terminal window to give the file a new name.
```
mv input_file.txt temp.txt
```

Now run the program. It should output the following.
```
File not found: input_file.txt
```

After you have run the program, you can move the file back to its original name.
```
mv temp.txt input_file.txt
```

# Grading Checklist
1. **Comments**
   - Did you comment your code to explain what the code is doing?
1. **Style**
   - Does your code follow the coding standards?
     - *Be sure your code is properly indented*
     - *Be sure you put a space on either side of all operators* (e.g. `=` `+` `-` `*` `/` `%` `<<` `>>` `||` `&&` `<` `>` `==` `!=`, etc.)
1. **Variables**
   - Did you use variable names and data types appropriate for the purpose and usage of the variable?
1. **Constants**
   - Did you use constants in your code?
     - *Be sure you used a constant instead of a hardcoded character literal for calling the function*
     - *Be sure the names of the constants are all UPPERCASE letters*
1. **Compile**
   - Does your program compile?
     - *Be sure there are no errors or warnings when you run clang++*
1. **Output**
   - Does your program produce the same results as the Sample Output?
     - *Be sure the results are written to a file, not the Terminal window*
     - *Be sure the output file has all of the same text as the input file*
1. **Error check**
   - Does your program print an error message when the input file does not exist?
1. **Files**
   - Does your function close both files?
1. **GitHub**
   - Does the GitHub Website show your latest code updates?
