#include <string>

#include "eater.hh"
#include "logger.hh"

int main() {

    auto logger = StdoutLogger();

    // eat<Logger>(std::string{"orange"}, logger);
    auto eater = Eater(logger);
    eater.eat("orange");

    return 0;
}
