#ifndef MIREA_PRACTICE_RATIONAL_H
#define MIREA_PRACTICE_RATIONAL_H


class rational {
private:
    int a, b;
    void reduce();

public:

    rational(int a1 = 0, int b1 = 1);

    void set(int a1, int b1);

    void show();

};


#endif //MIREA_PRACTICE_RATIONAL_H
