#include "Serializer.hpp"

int main()
{
    //serialize;
    Data d;
    d.str = "hello";
    uintptr_t u = Serializer::serialize(&d);
    std::cout << "=============\n";
    std::cout << u << std::endl;
    
    //deserialize;
    Data *ptr = new Data;
    u = 45;
    ptr->str = "ptr";
    ptr = Serializer::deserialize(u);
    std::cout << "=============\n";
    std::cout << ptr << std::endl;
}
