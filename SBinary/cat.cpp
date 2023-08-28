#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream file (argv[1]);
    string line;

    while (getline(file, line))
    {
      cout << line << '\n';
    }
    file.close();
    return 0;
}
