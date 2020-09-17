#include <iostream>
#include <string>


int main()
{
    std::cout << "Ciao. Come ti chiami? ";
    std::string nome;
    std::cin >> nome;
    
    std::cout << "Ma sei (m)aschio o (f)emmina (m/f)? ";
    char mof;
    std::cin >> mof;
    
    std::cout << "\nCiao, " << nome;
    if (mof == 'f')
    {
        std::cout << ", amica mia.";
    }
    else
    {
        std::cout << ", amico mio.";
    }
    
    std::cout << " Come stai?\n";
}
