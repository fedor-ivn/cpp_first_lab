#include <iostream>
#include <string>

using namespace std;

bool is_prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int N = 100;
    for (int i = 2; i < N; i++) {
        if (is_prime(i)) {
            cout << i << endl;
        }
    }
}
