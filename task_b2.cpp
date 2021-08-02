#include <iostream>
#include <cmath>

using namespace std;


double calc_side(int x1, int y1, int x2, int y2) {
    return sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2));
}

int main() {
    int x1, y1;
    int x2, y2;
    int x3, y3;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;


    double a, b, c;


    a = calc_side(x1, y1, x2, y2);
    b = calc_side(x2, y2, x3, y3);
    c = calc_side(x3, y3, x1, y1);
    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;
    
    bool is_exists = (a < b + c) && (b < a + c) && (c < a + b);
    if (is_exists) {
        double p = (a + b + c) / 2;
        double square = sqrt(
            p * (p - a) * (p - b) * (p - c)
        );

        cout << "Area is: " << square << endl;
    } else {
        cout << "The triangle does not exists" << endl;
    }

}