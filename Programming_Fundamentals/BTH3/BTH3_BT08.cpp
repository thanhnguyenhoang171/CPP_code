#include<iostream>

using namespace std;

int main()
{
    int thang, nam;
    cout <<"Nhap thang: "<<endl;
    cin >>thang;
    cout <<"Nhap nam: "<<endl;
    cin >>nam;
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
            cout <<"So ngay cua thang "<<thang<<" nam "<<nam<<" la 31 ngay"<<endl;
    }
    else if (thang == 4 || thang == 6 || thang == 9|| thang == 11){
            cout <<"So ngay cua thang "<<thang<<" nam "<<nam<<" la 30 ngay"<<endl;
        }
    else if (thang == 2 && nam % 4 == 0 && nam % 100 != 0){
            cout <<"So ngay cua thang "<<thang<<" nam "<<nam<<" la 28 ngay"<<endl;
        }
    else {
            cout <<"So ngay cua thang "<<thang<<" nam "<<nam<<" la 29 ngay"<<endl;
        }
    system("pause");
    return 0;
}

