#include "iostream"
#include "triangle.h"
using namespace std;

int main() {
    triangle mas[3];
    double a, b, c;
    for (int i=0; i<3; i++) {
        cout << "Enter a, b and c for triangle number " << i+1 << endl;
        cin >> a >> b >> c;
        mas[i] = triangle(a, b, c);
        if (!mas[i].exist_tr()) {
            double* arr = mas[i].show();
            cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
            cout << "There is no triangle with such sides, try again" << endl;
            i--;
        }
    }
    for (int i=0; i<3; i++) {
        double* arr =  mas[i].show();
        cout << "Triangle Parameters: " << endl;
        cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
        cout << "The perimeter of the triangle: " << mas[i].Perimetr() << endl;
        cout << "The area of the triangle: " << mas[i].Square() << endl;
    }
    return 0;
}
