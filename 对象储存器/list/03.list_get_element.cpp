#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

void print(double &ele)
{
    cout << ele << endl;
}

int main(void)
{
    list<double> mylist;
    mylist.push_back(11.1);
    mylist.push_back(12.2);
    mylist.push_back(13.3);
    mylist.push_back(14.4);
    for_each(mylist.begin(), mylist.end(), print);
    list<double>::iterator it = mylist.begin();
    cout << *(++(++(++(it)))) << endl;;
    return 0;
}