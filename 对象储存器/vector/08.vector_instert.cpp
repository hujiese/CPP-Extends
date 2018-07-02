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

    vt.insert(vt.begin(), -1);
    for_each(vt.begin(), vt.end(), OutToScreen);
    cout << endl;

    vt.insert(vt.end(), -2);
    for_each(vt.begin(), vt.end(), OutToScreen);
    cout << endl;
    return 0;
}