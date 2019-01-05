#include <iostream>
#include <tuple>

int main()
{
    std::tuple<char, int, float> tp;
    tp = std::make_tuple('a', 10, 3.14);
    std::cout << std::get<0>(tp) << "\n";
    std::cout << std::get<1>(tp) << "\n";
    std::cout << std::get<2>(tp) << "\n";
}