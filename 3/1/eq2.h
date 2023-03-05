#ifndef MIREA_PRACTICE_EQ2_H
#define MIREA_PRACTICE_EQ2_H


class eq2 {
private:
    double a, b, c, D;

public:
    eq2(double a1, double b1, double c1);

    void set (double a1, double b1, double c1);

    double find_X();

    double find_Y(double x1);

    eq2 operator + (eq2& another);

    void getCoefficients();
};


#endif //MIREA_PRACTICE_EQ2_H
