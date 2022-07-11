 
#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;
 
void WriteFileMode(char* file_name)
{
  if (file_name != NULL)
  {
    fstream data_file;
    data_file.open(file_name, ios::out);
    data_file << "Welcome to blog: phattrienphanmem123az.com \n";
    data_file << "Chu de hoc lap trinh c++ co ban! \n";
    data_file.close();
  }
}
 
int main()
{
  WriteFileMode("demo.txt");
  return 0;
}
 
