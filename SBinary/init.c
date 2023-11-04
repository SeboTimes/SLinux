#include "unistd.h"

int main() {
    execve("/bin/bash", NULL, NULL);
    return 0;
}