#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

template<class T> void print(list<T> &mylist)
{
    mylist.reverse();
    for(typename list<T>::iterator it = mylist.begin();it != mylist.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main(void)
{
    list<double> list_one , list_two, list_three;
    double ele;
    for(int i = 0;i < 10;i++)
    {
        ele = i + i/10.0;
        list_one.push_front(ele);
    }
    
    print(list_one);
    list_two.assign(5, 5.6);
    print(list_two);
    list_three.assign(list_one.begin(), list_one.end());
    print(list_three);
    list_one.swap(list_two);
    print(list_one);
    print(list_two);
    list_one.swap(list_three);
    print(list_one);
    print(list_three);
    return 0;
}