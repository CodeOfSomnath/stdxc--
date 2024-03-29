/**
 * This is for io execptions
 */

#include <string>

namespace stdx
{
    class exception : public std::exception
    {
    private:
        std::string message;

    public:
        exception(std::string &message);
        ~exception();
        virtual const char *what() const noexcept override;
    };

    class io_exception : public exception
    {
    private:
        std::string message;

    public:
        io_exception(std::string &message);
        ~io_exception();
    };

    class file_not_found_exception : public io_exception
    {
    private:
        std::string message;

    public:
        file_not_found_exception(std::string &_message);
        ~file_not_found_exception();
    };

    class null_pointer_exception : io_exception
    {
    private:
        std::string message;

    public:
        null_pointer_exception(std::string &message);
        ~null_pointer_exception();
    };

} // namespace stdx
