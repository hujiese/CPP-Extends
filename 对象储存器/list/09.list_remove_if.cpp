#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

void print(int &ele)
{
    cout << ele << ", ";
}

void Origin(list<int> &L, int num)
{
    int temp;
    L.clear();
    for(int i = 0;i < num;i++)
    {
        temp = i + 1;
        L.push_back(temp);
    }
    for_each(L.begin(), L.end(), print);
    cout << endl;
}

int main(void)
{
    list<int> L1;
    Origin(L1, 9);
    int temp;
    temp = 9;
    L1.push_back(temp);
    temp = 8;
    L1.push_back(temp);
    for_each(L1.begin(), L1.end(), print);
    cout << endl;
    L1.remove(9);
    for_each(L1.begin(), L1.end(), print);
    cout << endl;
    L1.remove_if(bind2nd(not_equal_to<int>(), 1));
    for_each(L1.begin(), L1.end(), print);
    cout << endl;
    return 0;
}