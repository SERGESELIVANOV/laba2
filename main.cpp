#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void Read(vector <string> vektor1)
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
void Output(vector <string> vektor1)
{

}
void Writing(vector <string> vektor1)
{

}

int main()
{
    vector <string> vektor1;
    Read(vektor1);
    Output(vektor1);
    Writing(vektor1);
    cin.get();
    return 0;
}
