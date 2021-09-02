// A simple program that computes the square root of a number
#include <cmath>
/* #include <cstdlib>   */      // Removed because of C++11
#include <iostream>
#include <string>

#include "TemplateConfig.h"

int main(int argc, char* argv[])
{
  if (argc < 2) {
    std::cout << "Usage: " << argv[0] << " number" << std::endl;

    // report version
    std::cout << argv[0] << " Version " << Template_VERSION_MAJOR << "."
              << Template_VERSION_MINOR << std::endl;

    return 1;
  }

  // convert input to double
/*  const double inputValue = atof(argv[1]);    */      // Removed because of C++11
  const double inputValue = std::stod(argv[1]);

  // calculate square root
  const double outputValue = sqrt(inputValue);
  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
  return 0;
}

