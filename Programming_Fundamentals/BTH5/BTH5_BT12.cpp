#include<iostream>
using namespace std;

int main()
{
    int n;
    do 
    {
        cout <<"Nhap vao chieu dai canh hinh vuong: ";
        cin >>n;
        if (n <= 0){
            cout <<"Nhap sai roi! Hay nhap lai\n";
        }
    }
    while (n <= 0);
    for (int i = 1; i <= n; i++)
    {
        cout <<endl;
        for (int j = 1; j <= i; j++){
            if (i == n || j == 1 || i == j)
                cout <<"*";
            else 
                cout <<" ";
        }
    }
    cout <<endl;
    for (int i = 1; i <= n; i++)
    {
        cout <<endl;
        for (int j = 1; j <= n; j++){
            if (j < n - i + 1)
                cout <<" ";
            else 
                cout <<"*";
    }
    }
    cout <<endl;
    for (int i = 1; i <= n; i++)
    {
        cout <<endl;
        for (int j = 1; j <= n; j++){
            if (j > n - i + 1)
                cout <<" ";
            else 
                cout <<"*";
        }
    }
    cout <<endl;
    for (int i = 1; i <= n; i++)
    {   
        cout <<endl;
        for (int j = 1; j <= n; j++){
            if (i > j)
                cout <<" ";
            else    
                cout <<"*";
        }
    }
    cout <<endl;
    cout <<endl;
    int l = n, r = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        if ( j >= l && j <= r)
        {
            cout <<"*";
            cout <<" ";
        }   
            else  
                cout <<" ";
        l--;
        r++;
        cout <<endl;
    }
    cout <<endl; 
    system("pause");
    system("cls");
    return 0;
}