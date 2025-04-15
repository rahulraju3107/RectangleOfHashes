#include <iostream>

int main() {
    
    int width, height;
    
    std::cout << "Width: ";
    std::cin >> width;
    std::cout << "Height: ";
    std::cin >> height;
    
    for ( int i = 0; i < height; i++ )
    {
        for ( int j = 0; j < width; j++ )
        {
            std::cout << '#';
        }
        std::cout << std::endl;
    }

    return 0;
}
