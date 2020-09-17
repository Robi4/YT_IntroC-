#include <iostream>
#include <string>


int main()
{
    std::cout << "Ciao. Come ti chiami? ";
    std::string nome;
    std::cin >> nome;

    if (nome == "Andrea")
    {
        std::cout << "Questo e' un nome maschile!\n";
    }
    else
    {
        char mof { nome.back() };

        if (mof == 'a')
        {
            std::cout << "Ciao, amica mia. Come stai? ";
        }
        else
        {
            std::cout << "Ciao, amico mio. Come stai? ";
        }
    }
}
