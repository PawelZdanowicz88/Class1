#include <iostream>
#include <string>
class Calculator
{
private: 
    double num1; 
    double num2;
public:
    Calculator(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }
    double add(double num1, double num2) {
        double amount = num1 + num2;
        return amount;
    }
    double subtract_1_2(double num1, double num2) {
        double sub_1_2 = num1 - num2;
        return sub_1_2;
    }
    double subtract_2_1(double num1, double num2) {
        double sub_2_1 = num2 - num1;
        return sub_2_1;
    }
    double multiply(double num1, double num2) {
        double multi = num1 * num2;
        return multi;
    }
    double divide_1_2(double num1, double num2) {
        double div_1_2 = num1 / num2;
        return div_1_2;
    }
    double divide_2_1(double num1, double num2) {
        double div_2_1 = num2 / num1;
        return div_2_1;
    }
    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        } else {
            return false;
        }
    }
    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        } else {
            return false;
        }
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    double num1 = 0;
    double num2 = 0;
    do {
        std::cout << "Введите num1: ";
        std::cin >> num1;
        std::cout << "Введите num2: ";
        std::cin >> num2;
        Calculator electronika1(num1, num2);
        if ((electronika1.set_num1(num1))&&(electronika1.set_num2(num2))) {
            std::cout << "num1 + num2 = " << electronika1.add(num1, num2) << std::endl;
            std::cout << "num1 - num2 = " << electronika1.subtract_1_2(num1, num2) << std::endl;
            std::cout << "num2 - num1 = " << electronika1.subtract_2_1(num1, num2) << std::endl;
            std::cout << "num1 * num2 = " << electronika1.multiply(num1, num2) << std::endl;
            std::cout << "num1 / num2 = " << electronika1.divide_1_2(num1, num2) << std::endl;
            std::cout << "num2 / num1 = " << electronika1.divide_2_1(num1, num2) << std::endl;
        }
        else {
            std::cout << "Неверный ввод!" << std::endl;
        }
    } while (1);
    return 0;
}

