#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int Bin, Dec = 0, i = 0, tam, chS;
    bool LBin;
    do 
    {   
        LBin = true;
        cout << "Nhap mot so nhi phan: \n";
        cin >> Bin;
        tam = Bin;
        while (tam > 0 && LBin)
        {
            if (tam % 10 > 1)
                LBin = false;
            else 
                tam = tam / 10;

        }
        if (!LBin)
            cout << "Nhap sai! Hay nhap lai n\n";
    }
    while(!LBin);
    tam = Bin;
    do 
    {
        chS = tam % 10;
        Dec = Dec + chS * pow (2.0,i);
        tam = tam /10;
        i++;
    }
    while (tam > 0);
    cout << " He thap phan cua " << Bin << " la: "<<Dec<<endl;
    system("pause");
    return 0;
}