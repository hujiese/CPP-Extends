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
    list<int> l0, l1, l2, l3;
    list<int>::iterator it1, it2, it3;
    l0.push_back(9);
    l0.push_back(-1);
    l1.push_back(1);
    l1.push_back(5);
    l2.push_back(2);
    l2.push_back(3);
    l3.push_back(7);
    l3.push_back(8);
    for_each(l0.begin(), l0.end(), print);
    cout << endl;
    for_each(l1.begin(), l1.end(), print);
    cout << endl;
    for_each(l2.begin(), l2.end(), print);
    cout << endl;
    for_each(l3.begin(), l3.end(), print);
    cout << endl;

    l1.splice(l1.end(), l2);
    for_each(l1.begin(), l1.end(), print);
    cout << endl;
    for_each(l2.begin(), l2.end(), print);
    cout << endl;

    l1.splice(l1.end(), l0, (++l0.begin()));
    for_each(l1.begin(), l1.end(), print);
    cout << endl;
    for_each(l0.begin(), l0.end(), print);
    cout << endl;

    l1.splice(l1.end(), l3, l3.begin(), l3.end());
    for_each(l1.begin(), l1.end(), print);
    cout << endl;
    for_each(l3.begin(), l3.end(), print);
    cout << endl;

    l1.sort(greater<int>());
    for_each(l1.begin(), l1.end(), print);
    cout << endl;

    l1.sort();
    for_each(l1.begin(), l1.end(), print);
    cout << endl;
    return 0;
}