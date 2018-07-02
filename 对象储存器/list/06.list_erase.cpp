#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

void OutToScreen(int &ele)
{
    cout << ele << ", ";
}

int main(void)
{
    list<int> vt;
    for(int i = 0; i < 10; i++)
    {
        vt.push_back(i);
    }
    for_each(vt.begin(), vt.end(), OutToScreen);
    cout << endl;
    while(!vt.empty())
    {
        vt.pop_back();
        for_each(vt.begin(), vt.end(), OutToScreen);
        cout << endl;
    }

    cout << "------------------" << endl;
    vt.clear();
    for(int i = 0; i < 10; i++)
    {
        vt.push_back(i);
    }
    for_each(vt.begin(), vt.end(), OutToScreen);
    cout << endl;
    cout << "------------------" << endl;

    while(!vt.empty())
    {
        vt.erase(vt.begin());
    }
    for_each(vt.begin(), vt.end(), OutToScreen);
    return 0;
}
