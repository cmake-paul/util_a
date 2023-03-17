#include <Common/gen_greet.h>

#include <iostream>

void greet_world() {
    std::cout << "This is UtilA, echoing you the following greeting:\n"
              << "'" << generate_greeting() << "'\n";
}
