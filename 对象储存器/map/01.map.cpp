#include <iostream>
#include <map>

using namespace std;

typedef pair<int, double> CustomPair;

void Print(map<int, double> &m)
{
    for (map<int, double>::iterator it = m.begin(); it != m.end(); it++)
    {
     //   CustomPair pi = (pair<int, double>)(*it);
     // cout << pi.first << " " << pi.second << ";" << endl;

     //cout << it->first << " " << it->second << ";" << endl;
     cout << (*it).first << " " << (*it).second << ";" << endl;
    }
}

void PrintM(multimap<int, double> &m)
{
    for (multimap<int, double>::iterator it = m.begin(); it != m.end(); it++)
    {
        CustomPair pi = (pair<int, double>)(*it);
        cout << pi.first << " " << pi.second << ";" << endl;
    }
}

void PrintG(map<int, double, greater<int> > &m)
{
    for (map<int, double, greater<int> >::iterator it = m.begin(); it != m.end(); it++)
    {
        CustomPair pi = (pair<int, double>)(*it);
        cout << pi.first << " " << pi.second << ";" << endl;
    }
}

void PrintGM(multimap<int, double, greater<int> > &m)
{
    for (multimap<int, double, greater<int> >::iterator it = m.begin(); it != m.end(); it++)
    {
        CustomPair pi = (pair<int, double>)(*it);
        cout << pi.first << " " << pi.second << ";" << endl;
    }
}

void PrintLM(map<int, double, less<int> > &m)
{
    for (map<int, double, less<int> >::iterator it = m.begin(); it != m.end(); it++)
    {
        CustomPair pi = (pair<int, double>)(*it);
        cout << pi.first << " " << pi.second << ";" << endl;
    }
}

int main(void)
{
    map<int, double>::iterator itm;
    map<int, double, greater<int> >::iterator itmG;
    map<int, double, less<int> >::iterator itmL;
    map<int, double> m1;
    map<int, double, greater<int> > m2;
    multimap<int, double> m3;
    multimap<int, double, greater<int> > m4;

    m1.insert(CustomPair(1, 2.0));
    m1.insert(CustomPair(2, 5.0));
    m1.insert(CustomPair(3, 7.0));
    m1.insert(CustomPair(4, 8.0));
    m1.insert(CustomPair(5, 11.0));
    m1.insert(CustomPair(6, 6.0));
    Print(m1);
    cout << "-----------------" <<  endl;

    m2.insert(CustomPair(1, 2.0));
    m2.insert(CustomPair(2, 5.0));
    m2.insert(CustomPair(3, 7.0));
    m2.insert(CustomPair(4, 8.0));
    m2.insert(CustomPair(5, 11.0));
    m2.insert(CustomPair(6, 6.0));
    PrintG(m2);
    cout << "-----------------" <<  endl;

    m3.insert(CustomPair(1, 2.0));
    m3.insert(CustomPair(2, 5.0));
    m3.insert(CustomPair(3, 7.0));
    m3.insert(CustomPair(4, 8.0));
    m3.insert(CustomPair(5, 11.0));
    m3.insert(CustomPair(6, 6.0));
    PrintM(m3);
    cout << "-----------------" <<  endl;

    m4.insert(CustomPair(1, 2.0));
    m4.insert(CustomPair(2, 5.0));
    m4.insert(CustomPair(3, 7.0));
    m4.insert(CustomPair(4, 8.0));
    m4.insert(CustomPair(5, 11.0));
    m4.insert(CustomPair(6, 6.0));
    PrintGM(m4);
    cout << "-----------------" <<  endl;

    map<int, double>::allocator_type ma;
    ma = m2.get_allocator();
    map<int, double> m5(less<int>(), ma);
    m5.insert(CustomPair(1, 2.0));
    m5.insert(CustomPair(2, 5.0));
    m5.insert(CustomPair(3, 7.0));
    m5.insert(CustomPair(4, 8.0));
    m5.insert(CustomPair(5, 11.0));
    m5.insert(CustomPair(6, 6.0));
    PrintLM(m5);
    cout << "-----------------" <<  endl;

    cout << m1.size() << endl;
    cout << m1.max_size() << endl;
    cout << m1.empty() << endl;
    cout << "-----------------" <<  endl;

    m1.erase(m1.begin());
    Print(m1);
    cout << "-----------------" <<  endl;

    m1.erase(2);
    Print(m1);
    cout << "-----------------" <<  endl;

    m1.erase(++m1.begin(), m1.end());
    Print(m1);
    cout << "-----------------" <<  endl;

    m1.clear();
    Print(m1);
    cout << "-----------------" <<  endl;

    itmG = m2.find(3);
    cout << itmG->first << " " << itmG->second << ";" << endl;

    return 0;
}