#include "Constructor.h"
#include <iostream>


Entity::Entity(float x, float y) : X(x), Y(y) {}

void Entity::print() const
{
    std::cout << X << ", " << Y << std::endl;
}
