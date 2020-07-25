#include <iostream>

using namespace std;

void sqrt(int &value);

int main() {
    int value = 10;
    sqrt(value);
    return 0;
}

void sqrt(int &value)
{
    value = value * value;
}