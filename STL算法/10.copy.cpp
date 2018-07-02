#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <algorithm>
#include <functional>
using namespace std;

void print(int &ele)
{
    cout << ele <<", ";
}

int main(void)
{
    int dim[] = {1, 3, 5, 7, 9, 11, 32, 54, 65};
    vector<int> v1;
    v1.assign(dim, dim + 9);
    for_each(v1.begin(), v1.end(), print);
    cout << endl;

    list<int> l1, l2;
    copy(v1.begin(), v1.end(), back_inserter(l1));
    for_each(l1.begin(), l1.end(), print);
    cout << endl;

    l2 = l1;
    copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, ", "));
    cout << endl;

    copy_backward(v1.begin() + 5, v1.begin() + 8, l2.end());
    copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, ", "));
    cout << endl;
    
    return 0;
}