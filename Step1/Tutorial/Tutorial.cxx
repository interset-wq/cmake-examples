// A simple program that computes the square root of a number
#include <cmath>
#include <iostream>
#include <string> // stod(), string to double

#include <MathFunctions.h>

using namespace std;

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    cout << "Usage: " << argv[0] << " number" << '\n';
    return 1; // 1 error
  }

  // convert input to double
  const double inputValue = stod(argv[1]);

  // calculate square root
  const double outputValue = mathfunctions::sqrt(inputValue);
  cout << "The square root of " << inputValue << " is " << outputValue << '\n';
  return 0; // 0 error
}
