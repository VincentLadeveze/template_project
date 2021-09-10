  // A simple program that computes the square root of a number
#include "common.hpp"

using namespace feature3;

int Library::useMe()
{
  Feature1a feat1a;                         // Static declaration of object
  Feature2a * feat2a = new Feature2a();     // Dynamic declaration of object
  Feature3a * feat3a = new Feature3a();     // Dynamic declaration of object

  feat1a.displayHelloDetector();
  feat2a->displayHelloDetector();
  feat3a->displayHelloDetector();

  delete feat3a;
  delete feat2a;
  
  return 0;

}