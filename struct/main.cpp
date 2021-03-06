#include <iostream>

using namespace std;

typedef char* pchar;

struct address {
    pchar name;
    long number;
    pchar street;
    pchar town;
    int index;
    pchar work;
};

void printAddr(address& address);

int main()
{
    address az{"Artemii Zenkin",
               8,
               "Komendantski prospect",
               "Saint-Petersburg",
               197227,
               "ITMO University"
               };

    printAddr(az);

    return 0;
}

void printAddr(address& address)
{
    cout    << '\n' << address.name << '\n'
            << address.street << ", " << address.number << '\n'
            << address.town << '\n'
            << address.index << '\n'
            << address.work << endl;
}
