#ifndef ENTITY_HPP_INCLUDED
#define ENTITY_HPP_INCLUDED

#include "Coords.hpp"

class Entity
{
public:
    Entity() : coords(0,0) {} // would set new entity on top left corner...
    Entity(int x, int y) : coords(x, y) {}
    Entity(const Coords& c) : coords(c) {}

private:
    Coords coords;
};

#endif // ENTITY_HPP_INCLUDED
