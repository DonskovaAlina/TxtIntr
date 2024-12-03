#include <iostream>
#include <vector>
#include <string>
#include <sstream>

void print_usage() {
    std::cout << "Usage: calculator -o <operation> <operand1> <operand2> ... <operandN>\n";
    std::cout << "Operations:\n";
    std::cout << "  summa - Sum of all operands\n";
    std::cout << "  sub - Subtract all operands from the first operand\n";
}

int main(int argc, char *argv[]) {
    if (argc < 4) {
        print_usage();
        return 1;
    }

    std::string operation = argv[2];
    std::vector<int> operands;
    int result = 0;

    for (int i = 3; i < argc; i++) {
        operands.push_back(std::stoi(argv[i]));
    }

    if (operation == "summa") {
        for (int operand : operands) {
            result += operand;
        }
    } else if (operation == "sub") {
        result = operands[0];
        for (size_t i = 1; i < operands.size(); i++) {
            result -= operands[i];
        }
    } else {
        std::cout << "Unknown operation: " << operation << "\n";
        print_usage();
        return 1;
    }

    std::cout << "Result: " << result << "\n";
    return 0;
}
