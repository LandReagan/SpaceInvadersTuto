#ifndef ENUMGAMEEVENT_HPP_INCLUDED
#define ENUMGAMEEVENT_HPP_INCLUDED

enum GAME_EVENTS {
    // App events:
    UNKNOWN = 0,
    APP_CLOSE,
    GAME_END,

    // Player events:
    MOVE_LEFT,
    MOVE_RIGHT,
    SHOOT
};

#endif // ENUMGAMEEVENT_HPP_INCLUDED
