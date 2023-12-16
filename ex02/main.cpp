#include "Base.hpp"

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

int main()
{
    Base *a;
    a = generate();
}
