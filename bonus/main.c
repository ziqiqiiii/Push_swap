#include <unistd.h>

int main(void)
{
    write(1, "c", 1);
    write(1, "\n", 1);
}