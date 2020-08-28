#include "main.h"

#include "cstdio"
#include "cstdint"

int main()
{
    for (size_t i = 1; i < 50; ++i) {
        printf("%zu\n\0\0\0\0Fizz\n\0\0\0Buzz\n\0\0\0FizzBuzz\n"
            + (((0x1241843 >> ((i % 15) * 2)) & 0b11) * 8), i);
    }
}
