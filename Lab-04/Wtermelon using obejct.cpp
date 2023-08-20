#include <iostream>

class Watermelon {
private:
    int weight;

public:
    Watermelon(int w) {
        weight = w;
    }

    bool canDivideEvenly() {
        if (weight < 4) {
            return false;
        } else if (weight % 2 == 0 && (weight / 2) % 2 == 0) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    int w;
    std::cout << "Enter the weight of the watermelon: ";
    std::cin >> w;

    Watermelon watermelon(w);

    if (watermelon.canDivideEvenly()) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
