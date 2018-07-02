#include <iostream>
#include <vector>
#include <algorithm>

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

template<class T>
class Multiple{
private:
    T theValue;
public:
    Multiple(const T& v):theValue(v)
    {

    }

    void operator()(T& elem) const
    {
        elem *= theValue;
    }
};

int main(void)
{
    vector<int> myvector;
    FillValue(myvector, 1, 10);
    for_each(myvector.begin(), myvector.end(), print);
    cout << endl;
    for_each(myvector.begin(), myvector.end(), Multiple<int>(2));
    for_each(myvector.begin(), myvector.end(), print);
    cout << endl;
    return 0;
}