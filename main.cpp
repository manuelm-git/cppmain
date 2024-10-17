#include "Scalarconverter.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <climits>
#include <cfloat>

int main() {
    std::string testInputs[] = {
        "a", // char
        "42", // int
        "-42", // int
        "4.2f", // float
        "-4.2f", // float
        "4.2", // double
        "-4.2", // double
        "nan", // double special value
        "nanf", // float special value
        "+inf", // double special value
        "-inf", // double special value
        "+inff", // float special value
        "-inff", // float special value
        std::to_string(INT_MAX), // int max
        std::to_string(INT_MIN), // int min
        std::to_string(FLT_MAX) + "f", // float max
        std::to_string(FLT_MIN) + "f", // float min
        std::to_string(DBL_MAX), // double max
        std::to_string(DBL_MIN), // double min
        std::to_string(LLONG_MAX), // long long max
        std::to_string(LLONG_MIN), // long long min
        "\x01", // non-printable char
        "\x7F", // non-printable char
        "4..2a", // invalid input
        "42a", // invalid input
        "4.2.2", // invalid input
        "++42", // invalid input
        "--42", // invalid input
        "4.2ff", // invalid input
        "4.2dd", // invalid input
    };

    for (const std::string& input : testInputs) {
        std::cout << "Input: " << input << std::endl;
        Scalarconverter::convert(input);
        std::cout << "------------------------" << std::endl;
    }

    return 0;
}