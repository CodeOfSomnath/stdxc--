#include <iostream>

template <typename...Args>
void print(Args... args)
{
    auto printArg = [](const auto& arg) {
        std::cout << arg << " ";
    };
    
    (printArg(args), ...);
    
}

int main(int argc, char const *argv[])
{
    print("h", "ho", "jk");
    return 0;
}
