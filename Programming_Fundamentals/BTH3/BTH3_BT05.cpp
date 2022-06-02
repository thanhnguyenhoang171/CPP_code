#include<iostream>

using namespace std;

int main()
{
    int dtl;
    cout <<"Nhap diem tich luy: "<<endl;;
    cin >>dtl;
    if (dtl < 5){
        cout <<"Yeu"<<endl;;
    }
    else if (dtl >= 5 && dtl < 6){
        cout <<"Trung binh"<<endl;;
    }
    else if (dtl >= 6 && dtl < 7){
        cout <<"Trung binh kha"<<endl;
    }
    else if (dtl >= 7 && dtl < 8){
        cout <<"Kha"<<endl;
    }
    else if (dtl >=8 && dtl < 9){
        cout <<"Gioi"<<endl;;
    }
    else if (dtl >= 9){
        cout <<"Xuat sac"<<endl;
    }
    system("pause");
    return 0;
}