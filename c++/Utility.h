//
// Created by ethanabrace on 1/22/2018.
//

#ifndef HILOW_KEEPRUNNING_H
#define HILOW_KEEPRUNNING_H


#include <cstdlib>
#include <iostream>

class Utility {
public:
    static void wait(std::string message = "Press any key to continue...");

    static int random_int(int lowest, int highest);

};


#endif //HILOW_KEEPRUNNING_H
