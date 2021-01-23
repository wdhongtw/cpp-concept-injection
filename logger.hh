#include <string>

/**
 * The StdoutLogger class
 */
class StdoutLogger {
    public:

        /**
         * Log the given message
         *
         * @param [in] message The message to be logged
         *
         * @note The message should not contains endline
         */
        void log(const std::string &message);
};
