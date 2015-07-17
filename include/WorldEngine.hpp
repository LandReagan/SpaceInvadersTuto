#ifndef WORLDENGINE_HPP_INCLUDED
#define WORLDENGINE_HPP_INCLUDED

#include "EnumGameEvent.hpp"
#include "Entity.hpp"
#include "PlayerEntity.hpp"

#include <map>
#include <string>
#include <vector>
using std::map;
using std::vector;
using std::string;
using std::pair;

#include "IEngine.hpp"

class WorldEngine : public IEngine
{
public:
    void init();

    void addGameEvent(GAME_EVENTS ge) {game_events.push_back(ge);}

private:
    map<string, Entity> entities;
    vector<GAME_EVENTS> game_events;

    void clearGameEvents() {game_events.clear();}
};

#endif // WORLDENGINE_HPP_INCLUDED
