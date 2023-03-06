#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
    if (argc < 4) {
        cout << "Usage: " << argv[0] << " -a/-m operand1 operand2" << endl;
        return 1;
    }

    int operand1 = atoi(argv[2]);
    int operand2 = atoi(argv[3]);

    if (strncmp(argv[1], "-a", 2) == 0) {
        cout << operand1 + operand2 << endl;
    }
    else if (strncmp(argv[1], "-m", 2) == 0) {
        cout << operand1 * operand2 << endl;
    }
    else {
        cout << "Unknown flag: " << argv[1] << endl;
        return 1;
    }

    return 0;
}