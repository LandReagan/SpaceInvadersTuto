#ifndef LOGGER_HPP_INCLUDED
#define LOGGER_HPP_INCLUDED

#include <iostream>
#include <fstream>
#include <string>

using std::ofstream;

/** \brief Used to log all kind of messages through operator<<
 *
 * \class Logger
 */

class Logger
{
public:
    Logger(const std::string& filename = "DEBUGG.log")
    {
        out.open(filename);
        out << "Log file: " << filename << " is open!" << std::endl;
    }

    virtual ~Logger()
    {
        out << "Log file is closing..." << std::endl;
    }

    template<typename Tmessage>
    Logger& operator<<(const Tmessage& mess) {out << mess << std::endl; return *this;}

private:
    ofstream out;
};

extern Logger Log;

#endif // LOGGER_HPP_INCLUDED
