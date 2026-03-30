// #include <iostream>
// #include <fstream>
// using namespace std;

// int main (){
// //file ko open karna
// ofstream fout ;
// fout.open("path.txt");// create kar dega aur fir open kar dega
// //write kar sakta hu
// fout<<"hello India ";
// fout.close();

// }

// read form file

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main (){
//     ifstream fin;
// fin.open("path.txt");
// char c;
// c =fin.get();//it will give the same as it is in the file
// // fin>>c; // it will also give the but in this the space is not there
// while(!fin.eof()){
//     cout<<c;
//     c =fin.get();
//     // fin>>c;
// }
// fin.close();

// }

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ofstream fout;
  fout.open("raj.txt");
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