#include <exception>
#include <iostream>
#include <string>

#include "../../include/utils/exception.h"


IllegalMatrixOperation::IllegalMatrixOperation(const char* msg) {
    _message = "Illegal Matrix Operation: ";
    _message.append(msg);
};

const char* IllegalMatrixOperation::what() const noexcept {
    return _message.c_str();
};


FileException::FileException(const char* msg) {
    _message = "File Exception: ";
    _message.append(msg);
};

const char* FileException::what() const noexcept {
    return _message.c_str();
};
