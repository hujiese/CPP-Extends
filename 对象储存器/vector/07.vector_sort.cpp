#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Student
{
public:
    Student(const string &a, const double b):name(a), source(b){}

public:
    string name;
    double source;
    bool operator<(const Student &m) const
    {
        return this->source < m.source;
    }
};

bool name_sort_less(const Student &m, const Student &n)
{
    return m.name < n.name;
}

bool name_sort_greater(const Student &m, const Student &n)
{
    return m.name > n.name;
}

bool source_sort(const Student &m, const Student &n)
{
    return m.source > n.source;
}

void print(const Student &st)
{
    cout << st.name << " ---- " << st.source << endl;
}

void Original(vector<Student> &vt)
{
    Student st1("Tom", 74);
    vt.push_back(st1);
    st1.name = "Jimy";
    st1.source = 56;
    vt.push_back(st1);
    st1.name = "Mary";
    st1.source = 92;
    vt.push_back(st1);
    st1.name = "Jessy";
    st1.source = 85;
    vt.push_back(st1);
}

int main(void)
{
   vector<Student> vt;
   Original(vt);

   cout << "---- Before sorted ----" << endl;
   for_each(vt.begin(), vt.end(), print);

   cout << "---- After sorted by less score ----" << endl;
   sort(vt.begin(), vt.end());
   for_each(vt.begin(), vt.end(), print);

   cout << "---- After sorted by greater score ----" << endl;
   sort(vt.begin(), vt.end(), source_sort);
   for_each(vt.begin(), vt.end(), print);

   cout << "---- After sorted by less name ----" << endl;
   sort(vt.begin(), vt.end(), name_sort_less);
   for_each(vt.begin(), vt.end(), print);

   cout << "---- After sorted by greater name ----" << endl;
   sort(vt.begin(), vt.end(), name_sort_greater);
   for_each(vt.begin(), vt.end(), print);

    return 0;
}