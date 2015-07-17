#include "../include/WorldEngine.hpp"

void WorldEngine::init()
{
    entities.insert(pair<string, Entity>("Player", PlayerEntity()));
}
