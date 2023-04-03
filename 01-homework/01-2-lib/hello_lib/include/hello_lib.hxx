#ifndef INC_01_2_LIB_HELLO_LIB_HXX
#define INC_01_2_LIB_HELLO_LIB_HXX

#include <string_view>

/// print to stdout "hello, {user_name}" and return true on success
bool greetings(std::string_view user_name);

#endif //INC_01_2_LIB_HELLO_LIB_HXX
