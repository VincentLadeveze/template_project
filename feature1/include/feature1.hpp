/*
 * GPL v3
 *
 * feature1.hpp - <4 words of definition for the feature. Ex: Camera object interface>
 *
 * @author:  Vincent Ladeveze
 * @date:    2021
 *
 */
#ifndef __FEATURE1_HPP__
#define __FEATURE1_HPP__

#include <iostream>
#include <string>
#include <vector>


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
class Feature1a {

public:
    Feature1a(){
            std::cout << "Feature1a class, " << "Hello ME detector" << std::endl;
    };

    ~Feature1a(){};

    int displayHelloDetector();
};


#endif /* __FEATURE1_HPP__  */
