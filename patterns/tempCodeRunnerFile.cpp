#include <iostream>

int main() {
    int height = 7; // Height of the letter D
    int width = 5;  // Width of the letter D

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0 || (i == 0 && j < width - 1) || (i == height - 1 && j < width - 1) || (j == width - 1 && i > 0 && i < height - 1)) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}