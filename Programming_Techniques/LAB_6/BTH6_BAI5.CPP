#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
    char kq = ' ';
    int dem=0;
    ifstream ifile;
    ifile.open("D:/CHANH Data Resource/KTLT/BTTH/TEXT/BT4.txt");
    if (ifile.is_open())
    {
        while (!ifile.eof())
        {
            ifile.ignore(1);
            ifile >> kq;
            dem++;
        }
        ifile.close();
    }
    else
    {
        cout << "Khong mo duoc file de doc du lieu\n";
    }
    cout << "So ky tu: " << dem << endl;
    return 0;
}