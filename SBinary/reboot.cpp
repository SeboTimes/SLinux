#include <sys/reboot.h>

int main() {
    reboot(RB_AUTOBOOT);
    return 0;
}
