#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    ofstream ofile;
    ofile.open("D:/CHANH Data Resource/KTLT/BTTH/TEXT/BT4.txt", ios::out);

    int n;
    char s[21], *p;
    p = &s[0];
    cout << "Nhap chuoi: ";
    cin.getline(s, 20);
    if (ofile.is_open())
    {
        for (int i = 0; i < strlen(s); i++)
        {
            *(p + i) = toupper(s[i]);
            ofile << *(p + i);
            if (!ofile.eof())
                ofile << endl;
        }
        s[strlen(s)] = '\0';
        ofile.close();
        cout << "Ghi file thanh cong!\n";
    }
    else
    {
        cout << "Khong mo duoc file de ghi du lieu\n";
    }
    return 0;
}