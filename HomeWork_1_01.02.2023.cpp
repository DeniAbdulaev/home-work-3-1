#include <iostream>

class Calculator {

public:
    double num_1;
    double num_2;

    double add() {
        return num_1 + num_2;
    }
    double multiply() {
        return num_1 * num_2;
    }
    double subtract_1_2() {
        return num_1 - num_2;
    }
    double subtract_2_1() {
        return num_2 - num_1;
    }
    double divide_1_2() {
        return num_1 / num_2;
    }
    double divide_2_1() {
        return num_2 / num_1;
    }
    bool set_num_1(double num_1) {
        if (num_1 != 0) {
            this->num_1 = num_1;
            return true;
        }
        else return false;
    }
    bool set_num_2(double num_2) {
        if (num_2 != 0) {
            this->num_2 = num_2;
            return true;
        }
        else return false;
    }
};
int main()
{
    double a;
    double b;
    bool exit = false;

    Calculator start;

    while (!exit) {
        do {
            std::cout << "Choose number 1: ";
            std::cin >> a;
            start.set_num_1(a);
        } while (!start.set_num_1(a));

        do {
            std::cout << "Choose number 2: ";
            std::cin >> b;
            start.set_num_2(b);
        } while (!start.set_num_2(b));

        std::cout << start.add() << std::endl;
        std::cout << start.multiply() << std::endl;
        std::cout << start.subtract_1_2() << std::endl;
        std::cout << start.subtract_2_1() << std::endl;
        std::cout << start.divide_1_2() << std::endl;
        std::cout << start.divide_2_1() << std::endl;
    };
}

