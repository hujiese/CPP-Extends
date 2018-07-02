#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    vector<string> strs;
    strs.reserve(4);
    strs.push_back("aaa");
    strs.push_back("bbb");
    strs.push_back("ccc");
    strs.push_back("ddd");

    for(vector<string>::iterator it = strs.begin(); it != strs.end();it++)
    {
        cout << *it << endl;
    }

    cout << strs.size() << endl;
    cout << strs.capacity() << endl;
    cout << strs.max_size() << endl;

    strs.resize(10);
    cout << strs.size() << endl;
    cout << strs.capacity() << endl;
    
    for(vector<string>::iterator it = strs.begin(); it != strs.end();it++)
    {
        if(*it == "")
            cout << "-----------" << endl;
        else
            cout << *it << endl;
    }
    
    return 0;
}