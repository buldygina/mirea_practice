#include "figure.h"
#include "iostream"

using namespace std;

int main() {
    float x1, x2, x3, x4, y1, y2, y3, y4;
    for (int i = 1; i < 4; i++) {
        cout << "Enter the coordinates of the first point (x y):" << endl;
        cin >> x1 >> y1;
        cout << "Enter the coordinates of the second point (x y):" << endl;
        cin >> x2 >> y2;
        cout << "Enter the coordinates of the third point (x y):" << endl;
        cin >> x3 >> y3;
        cout << "Enter the coordinates of the fourth point (x y):" << endl;
        cin >> x4 >> y4;

        figure Figure(x1, x2, x3, x4, y1, y2, y3, y4);
        float* temp = Figure.show();
        cout << "Coordinates of the figure (x y)" << endl;
        cout << temp[0] << " " << temp[1] << endl;
        cout << temp[2]<< " " << temp[3] << endl;
        cout << temp[4]<< " " << temp[5] << endl;
        cout << temp[6]<< " " << temp[7] << endl;
        cout << "The perimeter of the figure: " << temp[8] << endl;
        cout << "The area of the figure: " << temp[9] << endl;
        cout << "The figure is a square: ";
        if (Figure.is_square()) {
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }
        cout << "The figure is a rhombus: ";
        if (Figure.is_romb()) {
            cout << "true" << endl;
        }
        else{
            cout << "false" << endl;
        }
        cout << "The figure is a rectangle: ";
        if (Figure.is_prug()) {
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }
        cout << "Can be the circle can be included in this figure: ";
        if (Figure.is_in_circle()) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
        cout << "Can be this figure included in circle: ";
        if (Figure.is_out_circle()) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    return 0;
}