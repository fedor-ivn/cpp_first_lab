#include <iostream>
#include <chrono>

using namespace std;

int fib(int n) {
    switch (n)
    {
    case 1:
    case 2:
        return 1;
    default:
        break;
    }
    int a = 1;
    int b = 1;

    for (int i = 2; i < n; i++) {
        int tmp = a + b;
        a = b;
        b = tmp;
    }
    return b;
}

int rec_fib(int n) {
    if (n <= 2) {
        return 1;
    }

    return rec_fib(n - 1) + rec_fib(n - 2);
}

int main() {
    int n;
    cin >> n;
    auto now = chrono::high_resolution_clock::now();
    int res = fib(n);
    // int res = rec_fib(n);
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = end - now;
    cout << "Elapsed time: " << elapsed.count() << '\n';
    // cout << res << endl;

    // cout << rec_fib(n) << endl;
}