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
    deque<double>::iterator iter;
    deque<double>::reverse_iterator riter;
    deque<double> d1, d2, d3;
    for(int i = 0;i < 10;i++)
    {
        d1.push_front(90 + i/10.0);
    }
    for_each(d1.begin(), d1.end(), out);
    cout << endl;

    iter = d1.begin();
    double begin = *iter;
    iter = d1.end();
    double end = *(--iter);

    riter = d1.rbegin();
    double rbegin = *riter;
    riter = d1.rend();
    double rend = *(--riter);
    double front = d1.front();
    double back = d1.back();

    cout << begin << ", " << end << ", " << front << ", " << back << endl;
    cout << rbegin << ", " << rend << endl;

    if(d1.empty())
    {
        cout << "empty !" << endl;
    }
    else
    {
        cout << d1.size() << endl;
    }

    cout << d1.at(5) << endl;
    d2.assign(6, 0);
    d3.assign(d1.begin(), d1.end());
    for_each(d2.begin(), d2.end(), out);
    cout << endl;
    for_each(d3.begin(), d3.end(), out);
    cout << endl;
    return 0;
}