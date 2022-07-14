#include<bits/stdc++.h>
using namespace std;
void chuyen_chuoi_in_hoa (string s)
{
    for (int i = 0 ; i< s.length(); i++)
    {
        if (s[i]>=97 && s[i]<=122)
        {
            s[i]= s[i]-32;
        }
    }
}

int main()
{  string s;
    cout << " nhap vao chuoi:";
    getline(cin,s);
    chuyen_chuoi_in_hoa(s);
    cout<< " chuoi sau khi khi chuyen la "<<s;
    return 0;
}
