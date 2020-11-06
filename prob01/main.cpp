// This program uses a function to ask the user to enter a number, and then the
// calling function displays that number back to the user.

#include <iostream>

// TODO: declare the function prototype for getInteger
int getInteger();

int main()
{
  int num;

  // TODO: call the function getInteger
  num = getInteger();

  std::cout << "Your number is " << num << std::endl;
  return 0;
}

// TODO: create the function definition for getInteger
// this function asks the user to enter an integer, and returns that
// number to the caller
// this function does not take any parameters, but returns an integer
int getInteger()
{
  int broque;
  std::cout << "Enter an integer: ";
  std::cin >> broque;
  return broque;
}
