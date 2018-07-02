#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main(void)
{
    list<double> mylist;
    mylist.push_back(10.3);
    if(mylist.empty())
        cout << "empty !" << endl;
    else
        cout << mylist.front() << ", " << mylist.empty() << endl;
    return 0;
}