#include <string>
#include <iostream>

#include "logger.hh"


void StdoutLogger::log(const std::string &message){
    std::cout << message << std::endl;
}
