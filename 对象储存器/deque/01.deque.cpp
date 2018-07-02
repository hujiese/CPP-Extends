#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

void print(int &ele)
{
    cout << ele << ", ";
}

int main(void)
{
    deque<int> d1;
    deque<int> d2(5);
    deque<int> d3(10, 2), d31(10, 3);
    deque<int> d4(d3);
    deque<int> d5(d31.begin(), d31.end());
    for_each(d1.begin(), d1.end(), print);
    cout << endl;
    for_each(d2.begin(), d2.end(), print);
    cout << endl;
    for_each(d3.begin(), d3.end(), print);
    cout << endl;
    for_each(d4.begin(), d4.end(), print);
    cout << endl;
    for_each(d5.begin(), d5.end(), print);
    cout << endl;
    cout << d2.size() << endl;
    cout << d2.max_size() << endl;
    d31.resize(5, 'A');
    for_each(d31.begin(), d31.end(), print);
    cout << endl;
    d3.resize(7, 0);
    for_each(d31.begin(), d31.end(), print);
    cout << endl;
    return 0;
}