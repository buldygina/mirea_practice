#ifndef MIREA_PRACTICE_TRAINGLE_H
#define MIREA_PRACTICE_TRAINGLE_H

class triangle {
private:
    double first_side;
    double second_side;
    double third_side;

public:
    triangle();

    triangle(double a, double b, double c);

    bool isTriangle() const;

    double *show() const;

    double getPerimetr() const;

    double getSquare() const;

};


#endif //MIREA_PRACTICE_TRAINGLE_H