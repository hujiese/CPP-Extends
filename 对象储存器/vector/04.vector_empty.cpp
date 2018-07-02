#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct ST{
    int id;
    double db;
};

void origin(int num, vector<ST> &vt)
{
    int n = num;
    ST temp;
    for(int i = 0;i < n;i++)
    {
        temp.id = i;
        temp.db = i * 10.0;
        vt.push_back(temp);
    }
}

int main(void)
{
    vector<ST> vt;
    origin(5, vt);
    cout << vt.size() << endl;
    
    while(!vt.empty())
    {
        cout << vt.back().id << "--" << vt.back().db << endl;
        vt.pop_back();
    }

    return 0;
}