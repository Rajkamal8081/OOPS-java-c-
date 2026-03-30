#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ofstream fout;
  fout.open("ra.txt");
  fout << "hello raj \n";
  fout << "hello r \n";
  fout << "hello rhf \n";
  fout << "hello fhi \n";
  fout << "hello rjhjj \n";

  ifstream fin;
  fin.open("raj.txt");
  string line;
  while (getline(fin, line))
  {
    cout << line << endl;
  }
  fin.close();
}