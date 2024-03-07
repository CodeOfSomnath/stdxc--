#include "../stdx/io_exception.h"

const char * exception::what() const noexcept {
   return this->message.c_str();
}

exception::exception(std::string & message)
{
    this->message = message;
}

exception::~exception()
{
}


io_exception::io_exception(std::string&  message) : exception(message)
{
    this->message = message;
}

io_exception::~io_exception()
{
}

file_not_found_exception::file_not_found_exception(std::string & _message) : io_exception(message)
{
    this->message = message;
}

file_not_found_exception::~file_not_found_exception()
{
}

null_pointer_exception::null_pointer_exception()
{
}

null_pointer_exception::~null_pointer_exception()
{
}
