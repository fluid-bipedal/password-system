// password_encoder.h
#pragma once
#include <string>

class PasswordEncoder {
public:
    static std::string encode(const std::string& password);
};
