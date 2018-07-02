#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

void out(double &ele)
{
    cout.width(5);
    cout.precision(1);
    cout << fixed << ele << " ";
}

int main(void)
{
    deque<double> d1, d2;
    for(int i = 0;i < 10;i++)
    {
        d1.push_front(80 + i/10.0);
    }
    for_each(d2.begin(), d2.end(), out);
    cout << endl;

    d1.swap(d2);
    for_each(d1.begin(), d1.end(), out);
    cout << endl; 

    for_each(d2.begin(), d2.end(), out);
    cout << endl;  

    d1.insert(d1.begin(), -1.0);
    d1.insert(d1.end(), -1.0);
    d1.insert(d1.begin() + 6, -0.0);
    for_each(d1.begin(), d1.end(), out);
    cout << endl;
    d1.erase(d1.begin() + 1);
    d1.erase(d1.begin() + 10);
    for_each(d1.begin(), d1.end(), out);
    cout << endl;

    d2.clear();
    for_each(d2.begin(), d2.end(), out);
    cout << endl;
    deque<double>::iterator it = find(d1.begin(), d1.end(), 80.5);
    cout << (it - d1.begin()) << endl;
    return 0;
}