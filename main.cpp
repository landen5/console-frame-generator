#include <iostream>
#include <cstdlib>
#include <vector>

void draw(int width, int height);
std::vector<int> init();

int main()
{
    std::vector<int> dimenions = init();
    draw(dimenions[0], dimenions[1]);

    return 0;
}

std::vector<int> init()
{
    std::vector<int> size;
    int x, y;
    std::cout << "Please entered desired frame width" << '\n';
    std::cin >> x;
    std::cout << "Please enter desired frame height" << '\n';
    std::cin >> y;
    size.push_back(x);
    size.push_back(y);
    return size;
}

void draw(int width, int height)
{
    for(int i = 1; i<= width; i++)
    {
        std::cout << '#';
    }
    std::cout << '\n';
    for(int i = 1; i <= height - 2; i++)
    {
        std::cout << '#';
        for(int j = 1; j <= width - 2; j++)
        {
            std::cout << ' ';
        }
        std::cout << '#';
        std::cout << '\n';
    }
    for(int i = 1; i <= width; i++)
    {
        std::cout << '#';
    }
}
