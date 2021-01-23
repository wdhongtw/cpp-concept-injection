#include <string>


/**
 * The string_logger concept
 */
template<class T>
concept string_logger = requires (T a) {
    a.log(std::string{});

    // Note: Uncomment this line to trigger build fail
    // a.put(std::string{});
};

/**
 * @tparam T the type which looks like a logger
 * @param name The name of person to be eatted
 * @param logger The logger object
 */
template<class T>
void eat(std::string name, T logger) requires string_logger<T> {
    logger.log(std::string{"I ate "} + name);
}

/**
 * Eater class
 *
 * @tparam T the type which looks like a logger
 */
template<class T>
class Eater {
    public:

        /**
         * @param logger The logger object
         */
        Eater(T logger) requires string_logger<T> : logger_(logger) {}

        /**
         * @param name The name of person to be eatted
         */
        void eat(std::string name) {
            logger_.log(std::string{"I ate "} + name);
        }

    private:

        /**
         * The internal logger object
         */
        T logger_;
};
