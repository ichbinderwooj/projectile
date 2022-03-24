#include "error.h"

Error::Error(const char* message)
{
    this->message = message;
}

const char* Error::what()
{
    return message;
}