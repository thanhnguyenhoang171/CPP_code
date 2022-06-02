#include<iostream>

using namespace std;

int main()
{
    int n;
    cout <<"Nhap mot so nguyen"<<endl;
    cin >>n;
    if (n < 0){
        cout <<n<<" la so am"<<endl;
    }
    else if (n > 0){
        cout <<n<<" la so duong"<<endl;
    }
    else{
        cout <<"So 0"<<endl;
    }
    system("pause");
    return 0;
}