#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

typedef struct s_Data
{
    void *ptr;
}   Data;

class Serializer
{
private:
    
public:
    Serializer();
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
    ~Serializer();
};

#endif