#include<iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Nhap so nguyen n lon hon 0: ";
    cin >>n;
    int i = 1;
    int s = 0;
   do {
       s+=i;
       i++;
   }while(i <= n && n > 0);
   if (n > 0){
       cout <<"Tong tu 1 den "<<n<<" la : "<<s<<endl;
   }
   else {
       cout <<"Nhap sai n !"<<endl;
   }
   system("pause");
   return 0;
}