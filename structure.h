#ifndef COMPATIBILITY_CHECKER_H
#define COMPATIBILITY_CHECKER_H
#include <iostream>


class PCBuild
{
    public:
    void welcomeScreen();


    private:
    std::string name;
    std::string socket;
    int powerWattage;
};


#endif