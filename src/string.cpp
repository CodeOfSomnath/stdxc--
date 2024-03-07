#include "../stdx/string.h"
#include <sstream>
#include <algorithm>
#include <cctype>

// trim functions
void stdx::string::trim(std::string &_s)
{
    rtrim(_s);
    ltrim(_s);
}
void stdx::string::ltrim(std::string &_s)
{
    _s.erase(_s.begin(), std::find_if(_s.begin(), _s.end(), [](int ch)
                                      { return !std::isspace(ch); }));
}
void stdx::string::rtrim(std::string &_s)
{
    _s.erase(std::find_if(_s.rbegin(), _s.rend(), [](int ch)
                          { return !std::isspace(ch); })
                 .base(),
             _s.end());
}

// sub string function
std::vector<std::string> stdx::string::split(std::string &_s, char _sep)
{
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(_s);
    while (std::getline(tokenStream, token, _sep))
    {
        tokens.push_back(token);
    }
    return tokens;
}

std::vector<std::string> stdx::string::split_by_space(std::string &_s)
{
    return stdx::string::split(_s, ' ');
}

std::vector<std::string> stdx::string::split_lines(std::string &_s)
{
    return stdx::string::split(_s, '\n');
}

// getting array
std::vector<char> stdx::string::chars(std::string &_s)
{
    std::vector<char> _chars{};
    for (auto _c : _s)
    {
        _chars.push_back(_c);
    }
    return _chars;
}
std::vector<unsigned char> stdx::string::get_u8(std::string &_s)
{
    std::vector<unsigned char> _chars{};

    for (auto _c : _s)
    {
        _chars.push_back((unsigned char)_c);
    }

    return _chars;
}

// join function
void stdx::string::join(std::string &_s, std::string _sep, std::vector<std::string> &_substr)
{
    if (_substr.empty())
    {
        _s = "";
        return;
    }

    _s += _substr[0];
    for (size_t i = 1; i < _substr.size(); ++i)
    {
        _s += _sep + _substr[i];
    }
}