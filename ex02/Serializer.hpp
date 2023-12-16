#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

typedef struct s_Data
{
    std::string str;
}   Data;

class Serializer
{
public:
    // Orthodox canolical form;
    Serializer();
    Serializer(const Serializer &other);
    Serializer &operator=(const Serializer &other);
    ~Serializer();
    // Methods;
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif