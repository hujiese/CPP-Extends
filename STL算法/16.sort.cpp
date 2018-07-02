#include <iostream>
#include <iterator>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <functional>
using namespace std;

int main(void)
{
    int dim[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int> d1;
    copy(dim, dim + 9, back_inserter(d1));
    copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, ", "));
    cout << endl;

    sort(d1.begin(), d1.end());
    copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, ", "));
    cout << endl;

    stable_sort(d1.begin(), d1.end(), greater<int>());
    copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, ", "));
    cout << endl;

    return 0;
}