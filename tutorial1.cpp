#include <iostream>

int main()
{
    float a;
    float b;
    
    /*
    int Berechnung;

    std::cout << "Taschenrechner:" << std::endl;
    std::cout << "Addition = 1" << std::endl;
    std::cout << "Multiplikation = 2" << std::endl;

    std::cin >> Berechnung;

    if (Berechnung == 1) {
        std::cout << "sum of a and b" << std::endl;
        std::cout << "a = ";
        std::cin >> a;
        std::cout << "b = ";
        std::cin >> b;
    
        std::cout << "Result = " << a+b << std::endl;
    }

    else if (Berechnung == 2) {
        std::cout << "produkt of a and b" << std::endl;
        std::cout << "a = ";
        std::cin >> a;
        std::cout << "b = ";
        std::cin >> b;
    
        std::cout << "Result = " << a*b << std::endl;
    }

    */


    int j = 0;
    for (int i = 0;i<=1000; i = i+1){
        j = j+i;
    }
    std::cout << j << std::endl;
    
    return 0;
}
