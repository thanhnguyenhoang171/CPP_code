#include<iostream>
#include<iomanip>
using namespace std;

void menu()
{
    cout <<"1. Cong\n";
    cout <<"2. Tru\n";
    cout <<"3. Nhan\n";
    cout <<"4. Chia\n";
}

int Cong (int a, int b)
{
    return (a + b);
}

int Nhan(int a, int b)
{
    return (a * b);
}

int Tru(int a, int b)
{
    return (a - b);
}

double Chia(int a, int b)
{
    return (a / b);
}

int main()
{
    int n, m, chon;
    char tt;
    do {
        system("cls");
        menu();
        cout <<"Nhap vao 2 so nguyen: ";
        cin >>n>>m;
        cout <<"Chon (1-4): ";
        cin >>chon;
        switch (chon)
        {
        case 1:
            cout <<n<<" + "<<m<<" = "<<Cong(n, m)<<endl;
            break;
        case 2:
            cout <<n<<" - "<<m<<" = "<<Tru(n, m)<<endl;
            break;
        case 3 :
            cout <<n<<" x "<<m<<" = "<<Nhan(n, m)<<endl;
            break;
        case 4:
            if (m == 0)
                cout <<"Loi chia khong\n";
            else    
                cout <<n<<" : "<<m<<" = "<<fixed<<setprecision(2)<<float(Chia(n, m))<<endl;
            break;
        default:
            cout <<"Nhap chon sai roi !\n";
            break;
        }
        do 
        {
            cout <<"\nTiep tuc (C/K): ";
            cin >>tt;
            if (tt != 'c'&& tt != 'C' && tt != 'k' && tt != 'K')
                cout <<"Nhap sai chon (C/K)! Hay nhap lai\n"; 
        }
        while (tt != 'c'&& tt != 'C' && tt != 'k' && tt != 'K');
        if (tt == 'c' || tt == 'C')
            continue;
        else    
            break;
    }
    while (true);
    system("pause");
    system("cls");
    return 0;
}