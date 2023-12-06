// main.cpp
#include <iostream>
#include "password_encoder.h"

int main() {
    std::string password;
    std::cout << "Enter your password: ";
    std::cin >> password;

    // Encoding the password
    std::string encodedPassword = PasswordEncoder::encode(password);

    std::cout << "Encoded password: " << encodedPassword << std::endl;

    return 0;
}
