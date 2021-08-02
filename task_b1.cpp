#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    bool is_exists = (a < b + c) && (b < a + c) && (c < a + b);
    
    cout << (is_exists ? "" : "Not ") << "Exists";
}