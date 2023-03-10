#include "iostream"
#include "circle.h"
using namespace std;

int main() {
    float r, x, y;
    float a, b, c;
    float r1, x1, y1;
    for (int i = 1; i < 4; i ++) {
        cout << "Enter the radius and coordinates for circle number" << i <<":" <<endl;
        cin >> r >> x >> y;
        circle Circle(r, x, y);
        cout << "Circle number " << i << " square = " << Circle.square() << endl;
        cout << "Enter the sides of the triangle you want to fit around the circle:" <<endl;
        cin >> a >> b >> c;
        cout << "Can a triangle with such dimensions be inscribed around a circle: ";
        if (Circle.triangle_around(a, b, c)) {
            cout << "true" << endl;
        }
        else {
            cout << "false" <<endl;
        }
        cout << "Enter the sides of the triangle you want to fit into the circle:" <<endl;
        cin >> a >> b >> c;
        cout << "Can a triangle with such dimensions be inscribed in a circle: ";
        if (Circle.triangle_in(a, b, c)) {
            cout << "true" << endl;
        }
        else {
            cout << "false" <<endl;
        }
        cout << "Enter the radius and coordinates for a new circle to check if it intersects with circle number " << i <<endl;
        cin >> r1, x1, y1;
        bool intersects = Circle.check_circle(r1, x1, y1);
        cout << "If the new circle intersects with circle number " <<i<<": ";
        if (intersects) {
            cout << "true" << endl;
        } else {
            cout << "false"<< endl;
        }
        cout << "Enter new values for this circle: "<< endl;
        cin >> r >> x >> y;
        Circle.set_circle(r, x, y);
        cout << "The parameters of the circle have been changed!"<< endl;
    }
    return 0;

}