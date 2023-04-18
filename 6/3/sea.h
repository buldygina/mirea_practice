//
// Created by sirok1 on 18.04.2023.
//

#ifndef MIREA_PRACTICE_SEA_H
#define MIREA_PRACTICE_SEA_H

#include <string>
#include "ocean.h"
using namespace std;

class Sea : public Ocean {
protected:
    string type;
public:
    Sea();
    Sea(string name, string location, float size, float depth, string type);
    virtual void showInfo();
};



#endif //MIREA_PRACTICE_SEA_H
