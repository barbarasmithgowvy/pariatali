#include <iostream>

void pressKey(char c) {
    switch (c) {
        case 'a':
            std::cout << "Left\n";
            break;
        case 'd':
            std::cout << "Right\n";
            break;
        case 'w':
            std::cout << "Up\n";
            break;
        case 's':
            std::cout << "Down\n";
            break;
        default:
            std::cout << "Invalid Key\n";
            break;
    }
}

int main() {
    char key;
    std::cout << "Press a key: ";
    std::cin >> key;
    pressKey(key);
    return 0;
}
