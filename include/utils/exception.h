#pragma once


class IllegalMatrixOperation : public std::exception {
    private:
        std::string _message;

    public:
        IllegalMatrixOperation(const char* msg);
        const char* what() const noexcept override;
};

class FileException : public std::exception {
    private:
        std::string _message;

    public:
        FileException(const char* msg);
        const char* what() const noexcept override;
};
