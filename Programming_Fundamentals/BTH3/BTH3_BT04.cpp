#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout <<"Nhap vao hai so nguyen: "<<endl;;
    cin >>a>>b;
    if (a ==b){
        cout <<"Hai so bang nhau"<<endl;
    }
    else if (a > b){
        cout <<a<<" lon hon "<<b<<endl;
    }
    else {
        cout <<a<<" be hon "<<b<<endl;
    }
    system("pause");
    return 0;
    }
    
