#include <iostream>
#include <string>

int main() {
    int count[6] = {0};
    int total_students = 0;
    char grade;

    std::cout << "Please input grade of each student (A-F) or input 0 to exit." << std::endl;

    while (true) {
        std::cout << "Student [" << total_students + 1 << "]: ";
        std::cin >> grade;

        if (grade == '0') {
            break;
        }

        if (grade >= 'A' && grade <= 'F') {
            count[grade - 'A']++;
            total_students++;
        } else {
            std::cout << "Wrong input. Please input again." << std::endl;
        }
    }

    std::cout << "In total " << total_students << " students." << std::endl;

    std::cout << "A = " << count[0] << ", B = " << count[1] << ", C = " << count[2] << ", D = " << count[3] << ", F = " << count[5] << std::endl;

    return 0;
}