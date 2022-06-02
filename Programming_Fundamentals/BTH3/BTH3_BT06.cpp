#include<iostream>

using namespace std;

int main()
{
    int nam;
    cout <<"Nhap vao nam: "<<endl;
    cin >>nam;
    if (nam % 4 == 0 && nam % 100 != 0){
        cout <<"Nam nhuan"<<endl;
    }
    else{
        cout <<"Nam khong nhuan"<<endl;
    }
    system("pause");
    return 0;
}