#include <iostream>
#include <string>


int main()
{
    std::cout << "Ciao. Come ti chiami? ";
    std::string nome;
    std::cin >> nome;
    
    char mof { nome.back() };
    
    if (mof == 'a' && nome != "Andrea")
    {
        std::cout << "Questo e' un nome femminile.\n";
    }
    else if (mof == 'o' || nome == "Andrea")
    {
        std::cout << "Questo e' un nome maschile.\n";
    }
    else if (mof == 'e')
    {
        std::cout << "Non so se trattasi di nome maschile o femminile...\n";
    }
    else if (mof == 'i' || mof == 'u')
    {
        std::cout << "Sei sicuro che sia un nome?\n";
    }
    else
    {
        std::cout << "Non ho mai sentito questo nome!\n";
    }
}
