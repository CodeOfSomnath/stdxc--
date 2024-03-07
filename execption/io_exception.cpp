#include "../stdx/io_exception.h"

const char * stdx::exception::what() const noexcept {
   return this->message.c_str();
}

stdx::exception::exception(std::string & message)
{
    this->message = message;
}

stdx::exception::~exception()
{
}


stdx::io_exception::io_exception(std::string&  message) : exception(message)
{
    this->message = message;
}

stdx::io_exception::~io_exception()
{
}

stdx::file_not_found_exception::file_not_found_exception(std::string & _message) : io_exception(message)
{
    this->message = message;
}

stdx::file_not_found_exception::~file_not_found_exception()
{
}

stdx::null_pointer_exception::null_pointer_exception(std::string & message) : io_exception(message)
{
    this->message = message;
}

stdx::null_pointer_exception::~null_pointer_exception()
{
}
