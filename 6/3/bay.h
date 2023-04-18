//
// Created by sirok1 on 18.04.2023.
//

#ifndef MIREA_PRACTICE_BAY_H
#define MIREA_PRACTICE_BAY_H


#include "sea.h"
#include <string>

class Bay : public Sea {
protected:
    string nearby;
public:
    Bay();
    Bay(string name, string location, float size, float depth, string nearby, string type);
    virtual void showInfo();
};


#endif //MIREA_PRACTICE_BAY_H
