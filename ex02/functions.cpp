#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
    srand(time(0));
    char c = "ABC"[rand() % 3];

    std::cout << "Type " << c << " created!" << std::endl;
    
    if (c == 'A')
        return new A;
    else if (c == 'B')
        return new B;
    else
        return new C;
}

// void identify(Base* p)
// {
//     std::cout << *p << std::endl;
// }

// void identify(Base& p)
// {

// }