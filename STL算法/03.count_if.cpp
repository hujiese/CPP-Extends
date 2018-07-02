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

bool isEven(int elem)
{
    return elem % 2 == 0;
}

int main(void)
{
    vector<int> myvector;
    FillValue(myvector, 1, 10);
    for_each(myvector.begin(), myvector.end(), print);
    cout << endl;
    int ct = count(myvector.begin(), myvector.end(), 4);
    cout << ct << endl;
    int ct_if = count_if(myvector.begin(), myvector.end(), isEven);
    cout << ct_if << endl;
    int ct_gt = count_if(myvector.begin(), myvector.end(), bind2nd(greater<int>(), 2));
    cout << ct_gt << endl;
    cout << endl;
    return 0;
}