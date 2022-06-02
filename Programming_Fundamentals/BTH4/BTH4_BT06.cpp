#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i=2;
    bool LNT = true;
    cout <<"Nhap so nguyen n: ";
    cin >>n;
    if (n < 2){
        LNT = false;
    }
    else
            while (i < sqrt(double(n)) && LNT)
                    if (n%i==0){
                        LNT = false;
                    }
                    else
                        i++;
    if(LNT)
            cout << n << " la so nguyen to"<<endl;
    else    
            cout << n << " khong là so nguyen to"<<endl;
    system("pause");
    system("cls");
    return 0;
}

