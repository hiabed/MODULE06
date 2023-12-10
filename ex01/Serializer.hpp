#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

typedef struct uintptr_s
{
    
}   uintptr_t;

class Serializer
{
private:
    
public:
    Serializer();
    uintptr_t serialize(Data* ptr);
    ~Serializer();
};

#endif