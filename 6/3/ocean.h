//
// Created by sirok1 on 18.04.2023.
//

#ifndef MIREA_PRACTICE_OCEAN_H
#define MIREA_PRACTICE_OCEAN_H


#include <string>

using namespace std;

class Ocean {
protected:
    string name;
    string location;
    float size;
    float depth;
public:
    Ocean();
    Ocean(string name, string location, float size, float depth);
    virtual void showInfo();
};


#endif //MIREA_PRACTICE_OCEAN_H
