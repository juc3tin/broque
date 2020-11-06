#  Lab Exercise 10 Objectives
1. Loops and conditional statements
1. File reading and writing
1. Compile and run programs

# Additional Reading
Chapters 5 and 6 of the course textbook

# Instructions
Follow the README files for each problem assigned (e.g., prob01, prob02, prob03). If you have questions let your instructor know. You are also welcome to consult your classmates.

# Code Evaluation
*Note:* the explanations of all commands listed below are detailed in **labex00**. Refer to the README file in labex00, if needed.

1. Get a copy of the lab exercise from GitHub, and change directory into prob01, and open main.cpp for editing in atom.

   ```
   git clone URL

   cd labex01-USERNAME/prob01

   atom main.cpp
   ```

1. Compile and run your program.

   ```
   clang++ -std=c++17 main.cpp -o main
   ```
   ```
   ./main
   ```

1. When you want to move to another problem, you need to go back up to the parent folder and navigate into the next problem. For example:

   ```
   cd ../prob02
   ```

# Submission
1. To upload your code to GitHub you will run the following 3 commands. You will replace the text *"Description of your code changes"* with an actual description of what you are checking in.

    ```
    git add .
    git commit -m "Description of your code changes"
    git push
    ```

1. If it asks you to configure global variables for an email and name, just copy the commands it provides but replace the dummy text with your email and GitHub username. When you're done, make sure you `git commit` your repository again.

    ```
    git config --global user.email "tuffy@csu.fullerton.edu"
    git config --global user.name "Tuffy Titan"
    ```

1. Once you have pushed your changes to GitHub, double check that your local repository is clean. The following should report: **Your branch is up to date with 'origin/master'**

    ```
    git status
    ```

1. Go back to the GitHub Website and refresh the page to see that your changes are there.
