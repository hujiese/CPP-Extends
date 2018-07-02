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

class SUM{
private:
    long sum_D;
public:
    SUM():sum_D(0)
    {

    }

    void operator()(int elem)
    {
        sum_D += elem;
    }

    //用作仿函数返回值
    operator double()
    {
        return static_cast<double>(sum_D);
    }
};

int main(void)
{
    vector<int> myvector;
    FillValue(myvector, 1, 10);
    for_each(myvector.begin(), myvector.end(), print);
    cout << endl;
    double sum = for_each(myvector.begin(), myvector.end(), SUM());
    cout << sum << endl;
    
    return 0;
}