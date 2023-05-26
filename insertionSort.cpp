#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include <iostream>
#include <vector>

int main(int ac, char **av)
{
    std::vector<int> vector;
    vector.push_back(7);
    vector.push_back(2);
    vector.push_back(4);
    vector.push_back(1);
    vector.push_back(5);
    for (std::vector<int>::iterator it = vector.begin(); it < vector.end(); it++)
    {

        std::vector<int>::iterator itr = it;
        for (; itr > vector.begin(); itr--)
        {
            if (itr != vector.begin() && *itr < *(itr - 1))
            {
                int tmp = *itr;
                *itr = *(itr - 1);
                *(itr - 1) = tmp;
            }
        }
    }
    for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
        std::cout << *it << std::endl;
    return 0;
}
