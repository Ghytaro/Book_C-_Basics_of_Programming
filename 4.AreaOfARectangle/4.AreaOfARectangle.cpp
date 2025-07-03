#include <iostream>
#include <limits>

int main() {
    int choice = 0;

    while (true) {
        std::cout << "Please select a number: \n 1 - area calculation, \n 2 - exit \n \n";

        try {
            std::cin >> choice;

            if (std::cin.fail()) {
                throw std::runtime_error("Invalid input. Please enter a number (1 or 2).");
            }

            if (choice == 1) {
                int a, b;
                std::cout << "\n Enter two numbers: ";
                std::cin >> a >> b;

                if (std::cin.fail()) {
                    throw std::runtime_error("Invalid input for numbers. Please enter two valid integers.");
                }

                int area = a * b;
                std::cout << "Area: " << area << '\n';
                std::cout << "------ \n";
            }
            else if (choice == 2) {
                std::cout << "Exiting program. Goodbye!\n";
                return 0;
            }
            else {
                throw std::runtime_error("Invalid choice. Please enter 1 or 2.");
            }
        }
        catch (const std::runtime_error& e) {
            std::cerr << "Error: " << e.what() << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please try again.\n\n";
        }
    }

    return 0;
}