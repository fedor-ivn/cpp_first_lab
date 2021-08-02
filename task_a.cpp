#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int d = b * b - 4 * a * c;
    if (d < 0){
        cout << "No solutions exist" << endl;
    } else {
        double x1 = (-b + sqrt(d)) / 2 * a;
        if (d > 0) {
            double x2 = (-b - sqrt(d)) / 2 * a;
            cout << x1  << ' ' << x2 << endl;
        } else {
            cout << x1 << endl;
        }
    }
}