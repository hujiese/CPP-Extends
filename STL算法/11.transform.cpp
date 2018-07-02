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
    list<int> l3, l2;
    vector<int> v1;
    v1.assign(dim, dim + 9);
    for_each(v1.begin(), v1.end(), print);
    cout << endl;

    transform(v1.begin(), v1.end(), back_inserter(l2), negate<int>());
    for_each(l2.begin(), l2.end(), print);
    cout << endl;

    transform(l2.begin(), l2.end(), l2.begin(), bind2nd(multiplies<int>(), 10));
    for_each(l2.begin(), l2.end(), print); 
    cout << endl;

    transform(l2.rbegin(), l2.rend(), ostream_iterator<int>(cout, ", "), negate<int>());
    cout << endl;
    
    transform(l2.rbegin(), l2.rend(), ostream_iterator<int>(cout, ", "), bind2nd(divides<int>(), 2));
    cout << endl;


    for_each(l2.begin(), l2.end(), print);
    cout << endl;

    transform(v1.begin(), v1.end(), l2.begin(), l2.begin(), multiplies<int>());
    copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, ", "));
    cout << endl;

    transform(l2.begin(), l2.end(), l2.begin(), ostream_iterator<int>(cout, ", "), multiplies<int>());
    
    for_each(l2.begin(), l2.end(), print);
    cout << endl;

    transform(v1.begin(), v1.end(), l2.begin(), back_inserter(l3), plus<int>());
    for_each(l3.begin(), l3.end(), print);
    cout << endl;

    transform(l2.begin(), l2.end(), l3.begin(), ostream_iterator<int>(cout, ", "), minus<int>());
    cout << endl;
    return 0;
}