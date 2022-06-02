#include<iostream>
using namespace std;

int main()
{
    int n1, n2, demC = 0, demL = 0, U10 =0;
    do
    {
        cout <<"Nhap vao hai so nguyen duong n1 va n2: ";
        cin >>n1>>n2;
        if (n2 <= n1 || n2 <= 0 || n1 <= 0){
            cout <<"Nhap sai roi! Hay nhap lai\n";
        }
    } while (n2 <= n1 || n2 <= 0 || n1 <= 0);
    for (int i = n1; i <= n2; i++){
        if (i % 2 == 0){
            demC++;
        } else {
            demL++;
        }
        if (10 % i == 0){
            U10++;
        }
    }
    cout <<"Tu "<<n1<<" den "<<n2<<" co "<<demC<<" so chan."<<endl;
    cout <<"Tu "<<n1<<" den "<<n2<<" co "<<demL<<" so le."<<endl;
    cout <<"Tu "<<n1<<" den "<<n2<<" co "<<U10<<" so la uoc so cua 10."<<endl;
    system("pause");
    system("cls");
    return 0;
}