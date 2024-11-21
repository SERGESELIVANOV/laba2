#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void Read(vector <string> vektor1)
{
ifstream in("txt.txt");
if (in.is_open())
{
    cout << "fail open" << endl;
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
