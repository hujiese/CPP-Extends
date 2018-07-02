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
    vector<int>::iterator pos1 = find(myvector.begin(), myvector.end(), 5);
    vector<int>::iterator pos2 = find_if(myvector.begin(), myvector.end(), bind2nd(greater<int>(), 3));

    cout << distance(myvector.begin(), pos1) + 1 << endl;
    cout << distance(myvector.begin(), pos2) + 1 << endl;
    return 0;
}