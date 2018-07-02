#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

typedef set<int> SET;
typedef multiset<int> MSET;

void OutPut(set<int> &s)
{
    for(set<int>::iterator it = s.begin();it != s.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void OutPutM(multiset<int> &s)
{
    for(multiset<int>::iterator it = s.begin();it != s.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main(void)
{
    SET s1;
    MSET s2;
    SET::iterator it;
    MSET::iterator Mit;

    pair<SET::iterator, SET::iterator> p1;
    pair<MSET::iterator, MSET::iterator> Mp1;
    s1.insert(10);
    s1.insert(15);
    s1.insert(21);
    s1.insert(17);
    s2.insert(11);
    s2.insert(16);
    s2.insert(20);
    s2.insert(18);
    s2.insert(20);
    OutPut(s1);
    OutPutM(s2);
    int size = s1.size();
    int Msize = s2.size();
    cout << size << endl;
    cout << Msize << endl;
    int max_size = s1.max_size();
    int max_Msize = s2.max_size();
    cout << max_size << endl;
    cout <<max_Msize << endl;
    int cnt = s1.count(10);
    int Mcnt = s2.count(20);
    cout << cnt << endl;
    cout << Mcnt << endl;
    
    cout << *(s1.find(21)) << endl;
    cout << *(s2.find(18)) << endl;

    it = s1.lower_bound(15);
    if(it == s1.end())
    {
        cout << "not exist..." << endl;
    }
    else
    {
        cout << "The elements is " << *it << endl;
    }

    Mit = s2.lower_bound(16);
    if(it == s2.end())
    {
        cout << "not exist..." << endl;
    }  
    else
    {
        cout << "The elements is " << *Mit << endl;
    }


    it = s1.upper_bound(15);
    if(it == s1.end())
    {
        cout << "not exist..." << endl;
    }
    else
    {
        cout << "The elements is " << *it << endl;
    }

    Mit = s2.upper_bound(16);
    if(it == s2.end())
    {
        cout << "not exist..." << endl;
    }
    else
    {
        cout << "The elements is " << *Mit << endl;
    }

    p1 = s1.equal_range(15);
    if(it == s1.end())
    {
        cout << "not exist..." << endl;
    }
    else
    {
        cout << "The first elements is " << *p1.first << endl;
        cout << "The senond elements is " << *p1.second << endl;
    }

    Mp1 = s2.equal_range(16);
    if(it == s2.end())
    {
        cout << "not exist..." << endl;
    }
    else
    {
        cout << "The first elements is " << *Mp1.first << endl;
        cout << "The senond elements is " << *Mp1.second << endl;
    }

    return 0;
}

