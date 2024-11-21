#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void Read(vector <string>& vektor1)
{
ifstream in("txt.txt");
if (in.is_open())
{
    size_t vektor1size = 0;
    while (!in.eof())
    {
        string element;
        in >> element;
        vektor1.push_back(element);
        vektor1size ++;
    }

}
 else
    {
        cout << "file not open" << endl;
    }
}
void Output(vector <string>& vektor1)
{
for (auto it = vektor1.begin(); it != vektor1.end(); it++)
{
    string x = *it;
    cout << x << endl;
}
}
void Writing(vector <string>& vektor1)
{
ofstream out ("out.txt");
for (auto element = vektor1.begin(); element != vektor1.end(); element++)
{
    string x = *element;
    out << x;
    out << " ";
}
out.close();
}

int main()
{
    vector <string> vektor1;
   // string el1 = "first";
    //string el2 = "second";
    //vektor1.push_back(el1);
    //vektor1.push_back(el2);
    Read(vektor1);
    Output(vektor1);
    Writing(vektor1);
    cin.get();
    return 0;
}
