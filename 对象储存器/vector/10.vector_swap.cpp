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
    vector<int> vta;
    vector<int> vtb;
    for(int i = 0; i < 10; i++)
    {
        vta.push_back(i);
    }

    for(int i = 10; i < 20; i++)
    {
        vtb.push_back(i);
    }

    vta.swap(vtb);
    for_each(vta.begin(), vta.end(), OutToScreen);
    cout << endl;
    for_each(vtb.begin(), vtb.end(), OutToScreen);
    cout << endl;
    return 0;
}