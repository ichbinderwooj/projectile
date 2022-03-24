#ifndef ERROR_H
#define ERROR_H

class Error
{
public:
    Error(const char* message);

    const char* what();

private: 
    const char* message;
};

#endif