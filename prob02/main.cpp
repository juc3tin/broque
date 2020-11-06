// This program requests a rectangle's dimensions from the user, and displays the
// rectangle.

#include <iostream>
#include <sstream>

// TODO: declare the function prototype for getUserInput
int getUserInput(std::string side);

int main()
{
  const std::string SYMBOL = "$";
  int length, height;

  length = getUserInput("length");
  height = getUserInput("height");

  for(int hite = 1; hite <= height; hite++)
  {
    for(int lngth = 1; lngth <= length; lngth++)
    {
      std::cout << SYMBOL;
    }
    std::cout << "\n";
  }
  return 0;
}

// this function prompts the user to enter the value for one of the sides
// of a rectangle, and returns that value to the caller
// this function accepts a string parameter which represents the type of
// side, for instance length or width

int getUserInput(std::string side)
{
  int num;
  bool valid = false;
  std::string temp;

  // get a valid integer from the user
  do
  {
    std::cout << "Enter the " << side << " of the rectangle: ";
    getline(std::cin, temp);

    // this converts the user input into a string stream
    std::stringstream ss(temp);

    // verify that the user input is a positive integer
    // note that if this is the case then "ss >> num" will successfully read
    // an integer, and "ss >> temp" will not successfully read a string
    // note: the "ss >> temp" call is rewriting to the temp string which is
    // fine since we don't need its value any longer
    if (ss >> num && !(ss >> temp) && num > 0)
    {
      valid = true;
    }
    else
    {
      std::cin.clear(); // just in case an error occurs with cin (eof, etc)
      std::cout << "Input must be a positive integer.\n";
    }
  } while (!valid);

  return num;
}
