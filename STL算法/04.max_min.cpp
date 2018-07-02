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
        for(int i = 0;i < last;i++)
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

bool AbsLess(int ele1, int ele2)
{
    return abs(ele1) < abs(ele2);
}

int main(void)
{
    vector<int> myvector;
    FillValue(myvector, -3, 12);
    for_each(myvector.begin(), myvector.end(), print);
    cout << endl;
    cout << *max_element(myvector.begin(), myvector.end()) << endl;
    cout << *min_element(myvector.begin(), myvector.end()) << endl;
    cout << *max_element(myvector.begin(), myvector.end(), AbsLess) << endl;
    cout << *min_element(myvector.begin(), myvector.end(), AbsLess) << endl;
    
    cout << endl;
    return 0;
}