/*
 * GPL v3
 *
 * feature3.hpp - <4 words of definition for the feature. Ex: Camera object interface>
 *
 * @author:  Vincent Ladeveze
 * @date:    2021
 *
 */
#ifndef __FEATURE3_HPP__
#define __FEATURE3_HPP__

#include <iostream>
#include <string>
#include <vector>

namespace feature3 {

/*
 *  E N U M S
 */
enum feat1Enum {
    foo         = 1,
    bar         = 2,
    foobar      = 3,
};

/*
 *  feature1a class definition
 */
class Feature3a {

  public:
    Feature3a(){
            std::cout << "Feature3a class, " << "Hello ME detector" << std::endl;
    };

    ~Feature3a(){};

    int displayHelloDetector();
};

} /* namespace feature3 */

#endif /* __FEATURE3_HPP__  */