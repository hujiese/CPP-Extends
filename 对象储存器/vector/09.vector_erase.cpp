#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void OutToScreen(int &ele)
{
    cout << ele << ", ";
}

int main(void)
{
    vector<int> vt;
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

    for(int i = 0; i < 10; i++)
    {
        vt.push_back(i);
    }
    for_each(vt.begin(), vt.end(), OutToScreen);
    cout << endl;
    vt.clear();
    for_each(vt.begin(), vt.end(), OutToScreen);

    cout << "------------------" << endl;

    for(int i = 0; i < 10; i++)
    {
        vt.push_back(i);
    }
    for_each(vt.begin(), vt.end(), OutToScreen);
    cout << endl;
    vt.erase(vt.begin(), vt.end() -2);
    for_each(vt.begin(), vt.end(), OutToScreen);
    return 0;
}