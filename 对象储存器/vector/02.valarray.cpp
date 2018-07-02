#include <iostream>
#include <valarray>
#include <string>

using namespace std;

template<typename T> void printValarray(const valarray<T> &va)
{
    for(int i = 0;i < va.size();i++)
    {
        cout << va[i] << " ";
    }
    cout << endl;
}

int main(void)
{
    valarray<int> val(4);
    printValarray(val);
    valarray<int> va2(3, 4);
    printValarray(va2);
    int ia[] = {1, 2, 3, 4, 5, 6};
    valarray<int> va3(ia, sizeof(ia)/sizeof(ia[0]));
    printValarray(va3);
    valarray<int> va4(ia + 1, 4);
    printValarray(va4);
    val = (va2 + va4) * va4;
    printValarray(val);
    return 0;
}