/*
 * Copyright (C) 2021, Detection Technology Plc.
 *
 * feature1.hpp - <4 words of definition for the feature. Ex: Camera object interface>
 *
 * @author:
 * @date:
 *
 */
#ifndef __FEATURE1_HPP__
#define __FEATURE1_HPP__

#include <iostream>
#include <string>
#include <vector>


namespace feature1 {


/*
 *  E N U M S
 */
enum feat1 {
    foo         = 1,
    bar         = 2,
    foobar      = 3,
};


/*
 *  feature1a class definition
 */
class feature1a {

public:
    feature1a();
    ~feature1a();

    int displayHelloDetector();
};


} /* namespace feature1 */

#endif /* __FEATURE1_HPP__  */
