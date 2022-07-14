#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
int main() {
string s = "hello wolrd";
ofstream fo;
fo.open("binary.txt", ios::out|ios::binary);
fo.write((char *)&s, s.length());
fo.close(); //Doc file
ifstream fi;
fi.open("binary.txt", ios::in|ios::binary);
string tmp;
fi.read((char *)&tmp,30);
cout << tmp << endl;
fi.close();
return 0;
}