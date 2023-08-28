#include <sys/stat.h>

int main(int argc, char *argv[]) {
    mkdir(argv[1], ALLPERMS);
    return 0;
}
