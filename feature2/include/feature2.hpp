/*
 * GPL v3
 *
 * feature2.hpp - <4 words of definition for the feature. Ex: Camera object interface>
 *
 * @author:  Vincent Ladeveze
 * @date:    2021
 *
 */
#ifndef __FEATURE2_HPP__
#define __FEATURE2_HPP__

#include <iostream>
#include <string>
#include <vector>


/*
 *  feature2a class definition
 */
class Feature2a {

public:
    Feature2a(){
            std::cout << "feature2a class, " << "Hello ME detector" << std::endl;
    };

    ~Feature2a(){};

    int displayHelloDetector();
};


#endif /* __FEATURE2_HPP__  */
