# SLinux
SLinux (Sebo Linux) is an attempt to create an independent and minimalistic [Linux](https://github.com/torvalds/linux) distribution completely made from scratch. ​It includes self-written software like commands and shells. It still depends on [Busybox](https://busybox.net/) and it will for a while, but I'm trying to replace it with my own software.

## Setup
1. Clone the repo.
```sh
git clone https://github.com/SeboTimes/SLinux.git
```

2. Download needed source code and compile it.
```sh
./build download base
```

3. Run it.
```sh
./build run
```