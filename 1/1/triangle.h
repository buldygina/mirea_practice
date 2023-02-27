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

    bool exist_tr() const;

    double *show() const;

    double Perimetr() const;

    double Square() const;

};


#endif //MIREA_PRACTICE_TRAINGLE_H