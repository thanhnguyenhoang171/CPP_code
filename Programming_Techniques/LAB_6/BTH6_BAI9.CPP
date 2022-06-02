#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void ghistr(string &file, string s)
{
    ofstream ofile;
    ofile.open(file, ios::out);
    if (ofile.is_open())
    {
        ofile << s;
        ofile.close();
        cout << "Ghi thanh cong!\n";
    }
    else
    {
        cout <<"Ghi khong thanh cong\n";
    }
}
void docstr(string file, string &s)
{
    ifstream ifile;
    ifile.open(file, ios::in);
    if (ifile.is_open())
    {
        ifile>>s;
        ifile.close();
    }
}
void comp(string file1,string file2)
{
    bool kq;
    string s1, s2;
    docstr(file1, s1);
    docstr(file2, s2);
    if (s1 > s2)
    {
        cout << "Chuoi 1 lon hon chuoi 2\n";
    }
    else if (s1<s2)
    {
        cout << "Chuoi 1 be hon chuoi 2\n";
    }
    else 
    {
        cout << "2 chuoi banng nhau\n";
    }
}
int main()
{
    string s1, filename1, filename2,s2;
    cout << "Nhap vao 1 chuoi: ";
    cin >> s1;
    cout << "Nhap ten file 1:";
    cin.ignore();
    cin >> filename1;
    ghistr(filename1, s1);
    docstr(filename1, s1);
}