#include <fstream>
#include <iostream>
using namespace std;
int main()
{
 fstream fout("Myfile.txt",ios::in|ios::out|ios::trunc);
 ofstream out_to_file("Myfile.txt");
 out_to_file<<"Let us learn C++.\n";
 out_to_file<<"You need a compiler to practice.\n";
 out_to_file.close();
 return 0;
}
