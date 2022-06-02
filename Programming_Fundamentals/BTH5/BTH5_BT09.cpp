#include<iostream>
using namespace std;

int main()
{
    int n;
    do {
        cout <<"Nhap vao mot so nguyen: ";
        cin >> n;
        if (n <= 0){
            cout <<"Nhap sai roi! Hay nhap lai\n";
        }
    } while (n <= 0);
    for (int i = 1; i <= 10; i++){
        cout <<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}