#include <iostream>
#include <string>
#include <array>
#include "proj1.h"
using namespace std;

int main(int argc, char * argv[])
{
bool alpha;
int total;
int val[5];
for (int i = 1; i < argc; ++i)
{
if (argv[i] == string("-a"))
        alpha = true;
if (argv[i] == string("-b"))
        alpha = false;
if (argv[i] == string("-e"))
        total = stoi(argv[i+1]);
if (argv[i] == string("-v"))
{
        val[0] = stoi(argv[i+1]);
        val[1] = stoi(argv[i+2]);
        val[2] = stoi(argv[i+3]);
        val[3] = stoi(argv[i+4]);
        val[4] = stoi(argv[i+5]);
}
}

swap(total, val, alpha);

return 0;
}
