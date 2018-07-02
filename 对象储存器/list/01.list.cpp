#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

template<class T> void print(const T &ele)
{
    cout << " " << ele << ";" << endl;
}

void Print_D(double &ele)//格式化输出
{
    cout.width(5);//长度为５
    cout.precision(1);//保留一位小数点
    cout << fixed << ele << ", ";//以定点数形式输出
}

void Print_I(int &ele)
{
    cout << ele << ",  ";
}

int main(void)
{
    list<string> mylist_string;
    list<double> mylist_double(6);

    mylist_string.push_front("1: jack");
    mylist_string.push_front("2: tom");
    mylist_string.push_front("3: mike");

    mylist_double.push_front(10.0);
    mylist_double.push_front(20.0);
    mylist_double.push_front(30.0);
    mylist_double.push_front(40.0);
    mylist_double.push_front(50.0);

    list<int> mylist_int(6, 0);
    list<double> mylist_double2(6, 0.0);
    list<int> elselist(mylist_int);
    list<double> Iterlist(mylist_double.begin(), mylist_double.end());

    list<string>::iterator iter_string;
    for(iter_string = mylist_string.begin();iter_string != mylist_string.end();iter_string++)
    {
        string temp = *iter_string;
        print<string>(temp); 
    }
    cout << endl;

    for_each(mylist_double.begin(), mylist_double.end(), Print_D);
    cout << endl;
    for_each(mylist_double2.begin(), mylist_double2.end(), Print_D);
    cout << endl;
    for_each(Iterlist.begin(), Iterlist.end(), Print_D);
    cout << endl;
    for_each(mylist_int.begin(), mylist_int.end(), Print_I);
    cout << endl;
    for_each(elselist.begin(), elselist.end(), Print_I);
    cout << endl;


    int size = mylist_string.size();
    int maxsize = mylist_string.max_size();
    mylist_string.resize(5);

    size = mylist_double.size();
    maxsize = mylist_double.max_size();
    mylist_double.resize(5);
    
    size = mylist_double2.size();
    maxsize = mylist_double2.max_size();
    mylist_double2.resize(5);

    size = Iterlist.size();
    maxsize = Iterlist.max_size();
    Iterlist.resize(5);

    size = mylist_int.size();
    maxsize = mylist_int.max_size();
    mylist_int.resize(5);

    size = elselist.size();
    maxsize = elselist.max_size();
    elselist.resize(5);

    for(iter_string = mylist_string.begin();iter_string != mylist_string.end();iter_string++)
    {
        string temp = *iter_string;
        print<string>(temp); 
    }
    cout << endl;
    for_each(mylist_double.begin(), mylist_double.end(), Print_D);
    cout << endl;
    for_each(mylist_double2.begin(), mylist_double2.end(), Print_D);
    cout << endl;
    for_each(Iterlist.begin(), Iterlist.end(), Print_D);
    cout << endl;
    for_each(mylist_int.begin(), mylist_int.end(), Print_I);
    cout << endl;
    for_each(elselist.begin(), elselist.end(), Print_I);
    cout << endl;


    list<double>::iterator Iter_D;
    list<double>::reverse_iterator Iter_rD;
    double tmp = 0.0;

    Iter_D = mylist_double.begin();
    tmp = *Iter_D;
    cout << tmp << endl;

    Iter_rD = mylist_double.rbegin();
    tmp = *Iter_rD;
    cout << tmp << endl;

    Iter_D = mylist_double.end();
    tmp = *Iter_rD;
    cout << tmp << endl;

    Iter_rD = mylist_double.rend();
    tmp = *(++Iter_D);
    cout << tmp << endl;

    tmp = mylist_double.front();
    cout << tmp << endl;

    tmp = mylist_double.back();
    cout << tmp << endl;

    return 0;
}