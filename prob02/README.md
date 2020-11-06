# Nested Loops
In this program, you will be using C++ programming constructs, such as nested loops.

## main.cpp
Write a program that asks the user to enter the length and height of a rectangle. Your program will then display the rectangle using nested loops.

1. From `main()` call the function `getUserInput()` twice in order to get the length and height of the rectangle, one call for each
   - *This function has been provided for you -* ***You do not need to modify this function***
   - You need to declare the function prototype for `getUserInput()` at the top of your program
   - This function includes input validation to be sure the user enters a valid integer
1. Use nested loops to draw the rectangle one character at a time
   - e.g. To print a rectangle that is 2 x 3 (length x height), your program would first print one '#' then the 2nd '#'. It would then move to the next row, where it prints one '#' followed by another '#'. And finally it would move to row three where it will print one '#' followed by a second '#'

## Constants
1. Define a constant char for the symbol that will be used to draw the rectangle, set to any printable character you choose

## Input Validation
1. Validate that the user inputs only positive integers, and continue asking the user for input until it is valid
   - *This is being done already by the function `getUserInput()`, which has been provided for you*

# Hints
1. Be sure to use nested loops, and be sure your program draws the rectangle only one character at a time
   - Since we know the values for length and height, a nested *for* loop is the perfect choice for the type of loops to use
1. The following can be used to get the length of the rectangle
   - **length = getUserInput("length");**
   - Make a very similar call in order to get the height

# Sample Output
Please note that items in **bold** are user input. These values will not be in your program. However, when your program executes and asks for a value, you will type those values into the *Terminal* window.

## Sample Output #1
<pre>
Enter the length of the rectangle: <b>14</b>
Enter the height of the rectangle: <b>4</b>

&&&&&&&&&&&&&&
&&&&&&&&&&&&&&
&&&&&&&&&&&&&&
&&&&&&&&&&&&&&
</pre>

## Sample Output #2
<pre>
Enter the length of the rectangle: <b>-9</b>
Input must be a positive integer.
Enter the length of the rectangle: <b>0</b>
Input must be a positive integer.
Enter the length of the rectangle: <b>9</b>
Enter the height of the rectangle: <b>-1</b>
Input must be a positive integer.
Enter the height of the rectangle: <b>0</b>
Input must be a positive integer.
Enter the height of the rectangle: <b>3</b>

&&&&&&&&&
&&&&&&&&&
&&&&&&&&&
</pre>

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
     - *Be sure you used a constant instead of a hardcoded character literal for displaying the rectangle*
     - *Be sure you used all UPPERCASE for the name of your constant*
1. **Compile**
   - Does your program compile?
     - *Be sure there are no errors or warnings when you run clang++*
1. **Output**
   - Does your program produce the same results as the Sample Output?
     - *Be sure the results are written to a file, not the Terminal window*
     - *Be sure to include one digit past the decimal*
1. **Error check**
   - Does your program continue prompting the user for a value that is in range when the user enters an invalid value?
1. **GitHub**
   - Does the GitHub Website show your latest code updates?
