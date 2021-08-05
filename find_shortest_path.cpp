#include <iostream>

#include "find_shortest_path_4.cpp"
#include "find_shortest_path_5.cpp"
#include "find_shortest_path_6.cpp"

int main() {
    int n;
    std::cin >> n;

    if (!(4 <= n && n <= 6)) {
        std::cout << "invalid N" << std::endl;
        return 1;
    }

    if (n == 4) {
        int distances[4][4];

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                std::cin >> distances[i][j];
            }
        }

        std::cout << find_shortest_path_4(distances) << std::endl;
        return 0;
    }

    if (n == 5) {
        int distances[5][5];

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                std::cin >> distances[i][j];
            }
        }

        std::cout << find_shortest_path_5(distances) << std::endl;
        return 0;
    }

    if (n == 6) {
        int distances[6][6];

        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                std::cin >> distances[i][j];
            }
        }

        std::cout << find_shortest_path_6(distances) << std::endl;
        return 0;
    }
}
