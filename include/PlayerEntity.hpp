#ifndef PLAYERENTITY_HPP_INCLUDED
#define PLAYERENTITY_HPP_INCLUDED

#include "Entity.hpp"
#include "WorldConfig.hpp"
#include "IDrawable.hpp"

class PlayerEntity : public Entity, IDrawable
{
public:
    PlayerEntity() : Entity(initialPlayerPositionX, initialPlayerPositionY) {}

private:

};

#endif // PLAYERENTITY_HPP_INCLUDED
