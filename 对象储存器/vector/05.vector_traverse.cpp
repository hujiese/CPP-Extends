#include <iostream>
#include <vector>
#include <algorithm>
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

//迭代器遍历
void Iter_for(vector<ST> &vt)
{
    for(vector<ST>::iterator it = vt.begin(); it != vt.end(); it++)
    {
        cout << it->id << "----1----" << it->db << endl;
        cout << (*it).id << "----2----" << (*it).db << endl;
    }
}

//at函数遍历
void at_for(vector<ST> &vt)
{
    for(int index = 0; index != vt.size(); index++)
    {
        cout << vt.at(index).id << "---" << vt.at(index).db << endl;
    }
}

//使用算法
template <class T> void Original(T &myvt)
{
    ST temp;
    temp.id = 666;
    temp.db = 23333;
    myvt.push_back(temp);
}
void out(ST &st)
{
    cout << st.id << "---23333----" << st.db << endl;
}
bool is666(ST &st)
{
    if(st.id == 666)
        return true;
    return false;
}
int main(void)
{
    vector<ST> vt;
    origin(5, vt);
    Iter_for(vt);
    at_for(vt);
    Original(vt);
    for_each(vt.begin(), vt.end(), out);
    if(count_if(vt.begin(), vt.end(), is666))
    {
        cout << "6666666" << endl;
    }
    while(!vt.empty())
    {
        cout << vt.back().id << "--" << vt.back().db << endl;
        vt.pop_back();
    }

    return 0;
}