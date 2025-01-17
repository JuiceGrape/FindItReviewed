#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <string>

namespace FindIt
{

class Object
{
private:
    std::string name;
    int id;
public:
    Object(std::string name, int id);
    ~Object();

    std::string GetName();
    int GetID();
};

};

#endif // OBJECT_HPP
