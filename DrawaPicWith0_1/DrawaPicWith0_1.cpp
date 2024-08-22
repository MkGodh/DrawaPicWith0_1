#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>


int main()
{
    int width, length;
    std::cout << "Please input weight: " << std::endl;
    std::cin >> width;
    std::cout << "Please input length: " << std::endl;
    std::cin >> length;

    std::ofstream pic("pic.txt");
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < width; ++j) {
            pic << std::rand() % 2;
        }
        pic << "\n";
    }
    pic.close();

    return  0;
}

