#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    std::list<int> l;

    for (int i = 0; i < 10; ++i)
    {
        v.push_back(i);
        l.push_back(i);
    }
    try
    {
        std::cout << easyfind(l, 5) << std::endl;
        std::cout << easyfind(l, 10) << std::endl;
    } catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << easyfind(v, 5) << std::endl;
        std::cout << easyfind(v, 10) << std::endl;
    } catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}

