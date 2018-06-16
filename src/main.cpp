#include <iostream>
#include "isprime.h"
#include "nextprime.h"

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_prime(11): " << is_prime<11>::value << std::endl;
    std::cout << next_prime<13>::value << std::endl;
    return 0;
}
