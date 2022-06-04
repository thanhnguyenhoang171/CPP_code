#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

void menu()
{
    cout << "--Chào mừng bạn đến sòng bài cào--\n";
    cout << "*Lật bài: nhấn phím Enter.\n";
    cout << "*Thoát: nhấn phím bất kỳ để thoát.\n";
    cout << "------------------------------------\n";
}
int defin(int k)
{
    int x;
    if (k == 0 || k == 1 || k == 2 || k == 3)
    {
        x = 1;
    }
    else if (k == 4 || k == 5 || k == 6 || k == 7)
    {
        x = 2;
    }
    else if (k == 8 || k == 9 || k == 10 || k == 11)
    {
        x = 3;
    }
    else if (k == 12 || k == 13 || k == 14 || k == 15)
    {
        x = 4;
    }
    else if (k == 16 || k == 17 || k == 18 || k == 19)
    {
        x = 5;
    }
    else if (k == 20 || k == 21 || k == 22 || k == 23)
    {
        x = 6;
    }
    else if (k == 24 || k == 25 || k == 26 || k == 27)
    {
        x = 7;
    }
    else if (k == 28 || k == 29 || k == 30 || k == 31)
    {
        x = 8;
    }
    else if (k == 32 || k == 33 || k == 34 || k == 35)
    {
        x = 9;
    }
    else if (k == 36 || k == 37 || k == 38 || k == 39)
    {
        x = 10;
    }
    else if (k == 40 || k == 41 || k == 42 || k == 43 || k == 44 || k == 45 || k == 46 || k == 47 || k == 48 || k == 49 || k == 50 || k == 51)
    {
        x = 0;
    }
    return x;
}
int count(int a, int b, int c)
{
    int x, y, z, tong, kq;
    x = defin(a);
    y = defin(b);
    z = defin(c);
    tong = x + y + z;
    if (tong == 10 || tong == 20 || tong == 30)
    {
        kq = -1;
    }
    else if (tong > 10 && tong < 20)
    {
        kq = tong - 10;
    }
    else if (tong > 0 && tong < 10)
    {
        kq = tong;
    }
    else if (tong > 20 && tong < 30)
    {
        kq = tong - 20;
    }
    else if (tong == 0)
    {
        kq = tong + 31;
    }
    return kq;
}

void display()
{
    menu();
    string name[51];
    name[0] = "Át Bích";
    name[1] = "Át Chuồn";
    name[2] = "Át Rô";
    name[3] = "Át Cơ";
    name[4] = "2 Bích";
    name[5] = "2 Chuồn";
    name[6] = "2 Rô";
    name[7] = "2 Cơ";
    name[8] = "3 Bích";
    name[9] = "3 Chuồn";
    name[10] = "3 Rô";
    name[11] = "3 Cơ";
    name[12] = "4 Bích";
    name[13] = "4 Chuồn";
    name[14] = "4 Rô";
    name[15] = "4 Cơ";
    name[16] = "5 Bích";
    name[17] = "5 Chuồn";
    name[18] = "5 Rô";
    name[19] = "5 Cơ";
    name[20] = "6 Bích";
    name[21] = "6 Chuồn";
    name[22] = "6 Rô";
    name[23] = "6 Cơ";
    name[24] = "7 Bích";
    name[25] = "7 Chuồn";
    name[26] = "7 Rô";
    name[27] = "7 Cơ";
    name[28] = "8 Bích";
    name[29] = "8 Chuồn";
    name[30] = "8 Rô";
    name[31] = "8 Cơ";
    name[32] = "9 Bích";
    name[33] = "9 Chuồn";
    name[34] = "9 Rô";
    name[35] = "9 Cơ";
    name[36] = "10 Bích";
    name[37] = "10 Chuồn";
    name[38] = "10 Rô";
    name[39] = "10 Cơ";
    name[40] = "J Bích";
    name[41] = "J Chuồn";
    name[42] = "J Rô";
    name[43] = "J Cơ";
    name[44] = "Q Bích";
    name[45] = "Q Chuồn";
    name[46] = "Q Rô";
    name[47] = "Q Cơ";
    name[48] = "K Bích";
    name[49] = "K Chuồn";
    name[50] = "K Rô";
    name[51] = "K Cơ";
    char choice;
    do
    {
        choice = getch();
        if (choice == 13)
        {
            int a[6];
            srand(time(NULL));
            for (int i = 0; i <= 5; i++)
            {
                a[i] = rand() % 52;

                for (int j = i - 1; j >= 0; j--)
                {
                    if (a[i] != a[j])
                        continue;

                    else
                    {
                        a[i] = rand() % 52;
                        j = i;
                    }
                }
            }
            cout << "Bạn bốc được lá: ";
            cout << name[a[0]] << ", " << name[a[1]] << ", " << name[a[2]] << ".";
            cout << "\nMáy bốc được: " << name[a[3]] << ", " << name[a[4]] << ", " << name[a[5]] << ".";
            cout << endl;
            cout << "Kết quả: \n";
            // Result of player
            if (count(a[0], a[1], a[2]) == -1)
            {
                cout << "Bạn bị bù chình\n";
            }
            else if (count(a[0], a[1], a[2]) == 31)
            {
                cout << "Bạn được 3 cào\n";
            }
            else if (count(a[0], a[1], a[2]) > 0 && count(a[0], a[1], a[2]) != 31)
            {
                cout << "Bạn được: " << count(a[0], a[1], a[2]) << " nút." << endl;
            }
            // Result of machine
            if (count(a[3], a[4], a[5]) == -1)
            {
                cout << "Máy bị bù chình\n";
            }
            else if (count(a[3], a[4], a[5]) == 31)
            {
                cout << "Máy được 3 cào\n";
            }
            else if (count(a[3], a[4], a[5]) > 0 && count(a[3], a[4], a[5]) != 31)
            {
                cout << "Máy được: " << count(a[3], a[4], a[5]) << " nút." << endl;
            }
            // End
            if (count(a[0], a[1], a[2]) > count(a[3], a[4], a[5]))
            {
                cout << "**Bạn đã thắng**\n";
            }
            else if (count(a[0], a[1], a[2]) < count(a[3], a[4], a[5]))
            {
                cout << "**Bạn đã thua**\n";
            }
            else if (count(a[0], a[1], a[2]) == count(a[3], a[4], a[5]))
            {
                cout << "**Bạn và máy hòa nhau**\n";
            }
            cout << endl;
        }
    } while (choice == 13);
}

int main()
{
    SetConsoleOutputCP(65001);
    display();
    system("pause");
    system("cls");
    return 0;
}