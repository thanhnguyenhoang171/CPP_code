#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ghifile;
    ifstream docfile;
    docfile.open("D:/CHANH Data Resource/KTLT/BTTH/TEXT/BT1.txt");
    int m;
    if (docfile.is_open())
    {
        docfile >> m;
        cout << "Ket qua tong la: " << m << endl;
        docfile.close();
    }
    else
        cout << "Khong mo duoc file de doc du lieu\n";
    return 0;
}
  