#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main(void)
{
    bitset<10> bs1(7);
    bitset<10> bs2(string("0010110010"));
    cout << bs1 << endl;
    cout << bs2 << endl;
    return 0;
}