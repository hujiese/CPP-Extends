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
    not_equal_to<int> Pred;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(5);
    l1.push_back(7);
    l2.assign(l1.begin(), l1.end());
    for_each(l1.begin(), l1.end(), print);
    cout << endl;
    l1.sort();
    l1.unique();
    for_each(l1.begin(), l1.end(), print);
    cout << endl;
    l2.sort();
    l2.unique(Pred);
    for_each(l2.begin(), l2.end(), print);
    cout << endl;
    return 0;
}