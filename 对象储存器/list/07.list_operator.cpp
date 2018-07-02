#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

void print(int &ele)
{
    cout << ele << ", ";
}

int main(void)
{
    list<int> l1, l2;
    l1.push_back(1);
    l1.push_back(2);
    l2.assign(l1.begin(), l1.begin());
    for_each(l1.begin(), l1.end(), print);
    cout << endl;
    for_each(l2.begin(), l2.end(), print);
    cout << endl;

    if(l1 == l2)
        cout << "====" << endl;
    l2.push_back(3);
    l1.push_back(1);
    for_each(l1.begin(), l1.end(), print);
    cout << endl;
    for_each(l2.begin(), l2.end(), print);
    cout << endl;

    if(l1 < l2)
        cout << "<<<<<" << endl;

    if(l1 > l2)
        cout << ">>>>>" << endl;

    if(l1 != l2)
        cout << "!!!!!!" << endl;
    return 0;
}