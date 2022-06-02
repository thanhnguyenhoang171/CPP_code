#include<iostream>
using namespace std;
void nhap(int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++){
        cin >>arr[i];
    }
}
void xuat(const int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++){
        cout <<arr[i];
        if (i < arrSize - 1)
            cout <<", ";
        else if (i == arrSize - 1)
            cout <<".";
    }
}
bool tim(const int arr[], int arrSize, int x)
{
    bool kq;
    for (int i = 0; i < arrSize; i++){
        if (arr[i]==x)
            kq = true;
        else    
            kq = false;
    }
    return kq;
}
void daonguoc(int arr[], int arrSize)
{
    for (int i = arrSize - 1; i >= 0; i--){
        cout <<arr[i];
        if (i > 0)
            cout <<", ";
        else    
            cout <<".";
        
    }
}
void xoa(int arr[], int& arrSize, int p)
{
    for (int i = 0; i < arrSize; i++){
        if (i == p)
            continue;
        else    
            cout <<arr[i];
    }
}
int main()
{
    int a[100], b, c, d;
    cout <<"Nhap vao chieu dai cua mang: ";
    cin >>b;
    cout <<"Nhap mang: \n";
    nhap (a,b);
    cout <<"Xuat mang: \n";
    xuat (a, b);
    cout <<endl;
    cout <<"Tim phan tu mang: \n";\
    cout <<"Nhap gia tri x: ";
    cin >>c;
    tim (a, b, c);
    cout <<endl;
    cout <<"Dao nguoc mang: ";
    daonguoc(a, b);
    cout <<endl;
    cout <<"Nhap vi tri can xoa phan tu trong mang: ";
    cin >>d;
    cout <<"Xoa phan tu mang tai vi tri "<<d<<"\n";
    xoa(a,b,d);
    cout <<endl;
    system("pause");
    return 0;
}