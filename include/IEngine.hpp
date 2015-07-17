#ifndef IENGINE_HPP_INCLUDED
#define IENGINE_HPP_INCLUDED

#include "Message.hpp"

#include <vector>
using std::vector;

/** \class IEngine
 *  Interface for all engines we will be using
 */

class IEngine
{
public:
    virtual void stepForward() = 0; /**< function used to trigger the engine */

    void registerAnEngine(IEngine* engine) {other_engine = engine;}

private:
    IEngine* other_engine;
};

#endif // IENGINE_HPP_INCLUDED
