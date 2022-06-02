#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    double LCB = 0.0;
    ofstream ofile;
    ofile.open("D:/CHANH Data Resource/KTLT/BTTH/TEXT/BT7txt", ios::out);
    cout << "Nhap vao he so luong: ";
    if (ofile.is_open())
    {
        do
        {
            cin >> LCB;
            if (LCB!=-1)
                ofile << LCB << " ";
        } while (LCB != -1);
        ofile.close();
        cout << "Ghi file thanh cong!\n";
    }
    else
    {
        cout << "Khong the mo file de ghi du lieu\n";
    }
    return 0;
}