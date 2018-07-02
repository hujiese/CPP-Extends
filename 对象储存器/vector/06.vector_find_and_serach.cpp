#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    vector<int> vt;
    for(int i = 0; i < 10; i++)
    {
        vt.push_back(array[i]);
    }

    vector<int>::iterator it = find(vt.begin(), vt.end(), 5);//找到5后，将返回指向5元素的迭代器指针
    cout << it - vt.begin() << endl;

    vector<int>::iterator st = find_if(vt.begin(), vt.end(), bind2nd(greater<int>(), 5));//找到5后，将返回第一个比5大元素的迭代器指针
     cout << st - vt.begin() << endl;
    return 0;
}