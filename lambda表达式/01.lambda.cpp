#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

int main(void)
{
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(7);

    int temp = 4;
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, ", "));
    cout << endl;


    stable_sort(vec.begin(), vec.end(),
    [](const int &a, const int &b)
    {
        return a < b;
    });
    for_each(vec.begin(), vec.end(),
    [](const int &val)
    {
        cout << val << " ";
    });
    cout << endl;


    vector<int>::iterator it = find_if(vec.begin(), vec.end(),
    [temp](const int &val)
    {
        return val > temp;
    });
    cout << *it << endl;
    
    return 0;
}