#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char kt=' ';
    ifstream ifile;
    ifile.open("D:/CHANH Data Resource/KTLT/BTTH/TEXT/BT4.txt", ios::in);
    ofstream ofile;
    ofile.open("D:/CHANH Data Resource/KTLT/BTTH/TEXT/BT6.txt", ios::out);
    if (ifile.is_open())
    {
        while (!ifile.eof())
        {
            ifile >> kt;
            if (kt == 'A' || kt == 'I' || kt == 'E' || kt == 'U' || kt == 'O')
            {
                ofile << kt;
            }
        }
        ifile.close();
        cout << "Ghi file thanh cong\n";
        ofile.close();
    }
    else
    {
        cout << "Khong the mo duoc file de doc va ghi\n";
    }
    return 0;
}