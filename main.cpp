#include <cmath>
/* #include <cstdlib>   */      // Removed because of C++11
#include <iostream>
#include <string>

#include "TemplateConfig.h"
#include "common.hpp"


int main(int argc, char* argv[])
{
  Library mylib;

  mylib.useMe();

  if (argc < 2) {
    std::cout << "Usage: " << argv[0] << " number" << std::endl;

    // report version
    std::cout << argv[0] << " Version " << Template_VERSION_GENERATION << "."
              << Template_VERSION_REVISION << "." << Template_VERSION_CORRECTION
              << "-rc" << Template_VERSION_RELEASE_CANDIDATE << std::endl;

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

