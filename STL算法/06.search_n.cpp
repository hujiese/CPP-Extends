#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

template<class T>
void FillValue(T& vect, int first, int last)
{
    if(last >= first)
    {
        for(int i = first;i < last;i++)
        {
            vect.insert(vect.end(), i);
        }
    }
    else
    {
        cout << "error !" << endl;
    }
}

void print(int elem)
{
    cout << elem << " ";
}

int main(void)
{
    vector<int> myvector;
    FillValue(myvector, -3, 12);
    for_each(myvector.begin(), myvector.end(), print);
    cout << endl;
    vector<int>::iterator pos1 = search_n(myvector.begin(), myvector.end(), 4, 3);
    if(pos1 != myvector.end())
    {
        cout << distance(myvector.begin(), pos1) + 1 << endl;
    }
    else
    {
        cout << "No ...." << endl;
    }

    vector<int>::iterator pos2 = search_n(myvector.begin(), myvector.end(), 4, 3, greater<int>());
    if(pos2 != myvector.end())
    {
        cout << distance(myvector.begin(), pos2) + 1 << endl;
    }
    else
    {
        cout << "No ...." << distance(myvector.begin(), pos2) + 1 << endl;;
    }
    return 0;
}