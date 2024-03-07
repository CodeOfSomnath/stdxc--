#include <string>
#include <vector>

namespace stdx
{
    
    namespace string
    {
        
        // trim functions
        void trim(std::string & _s);
        void ltrim(std::string & _s);
        void rtrim(std::string & _s);

        // sub string function
        std::vector<std::string> split(std::string & _s, std::string _sep);
        std::vector<std::string> split_by_space(std::string & _s);
        std::vector<std::string> split_lines(std::string & _s);

        // getting array
        std::vector<char> chars(std::string & _s);
        std::vector<unsigned char> get_u8(std::string & _s);
        
        // join function
        void join(std::string & _s, std::string _sep, std::string...);
        void join(std::string & _s, std::string _sep, std::vector<std::string> & _substr);


    } // namespace string
    

} // namespace stdx
