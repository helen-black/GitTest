#include <iostream>
#include <vector>
int main()
{
    std::vector<int> numbers(5);

    for (auto &elem : numbers)
        elem = 3;

    std::cout << "Hello!!!" << std::endl;
    return 0;
}
