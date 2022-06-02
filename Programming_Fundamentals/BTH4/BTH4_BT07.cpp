#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a, b, n;
    do {
        system("cls");
        cout <<"Menu chon : \n";
        cout << "Nhan phim 1 de chon phep tinh cong\n";
        cout << "Nhan phim 2 de chon phep tinh tru\n";
        cout << "Nhan phim 3 de chon phep tinh nhan\n";
        cout << "Nhan phim 4 de chon phep tinh chia\n";
        cout << "Nhan phim 0 de thoat\n";
    	do 
		{
        	cout << "Chon chuc nang: ";
        	cin >>n;
        	if (n > 4 || n < 0)
            cout << "Nhap sai roi! Moi nhap lai\n";
        
    	}while (n > 4 || n < 0);
        if (n >= 1 && n <= 4) 
		{
        	cout << "Nhap 2 so nguyen a va b: \n";
        	cin >>a>>b;
            switch (n)
			{
                case 1:
                	cout <<a<<" + "<<b<<" = "<<a + b<<endl;;
                	break;
                case 2:
                	cout <<a<<" - "<<b<<" = "<<a - b<<endl;;
                	break;
                case 3:
                	cout <<a<<" * "<<b<<" = "<<a * b<<endl;;
                	break;
                case 4:
                	if (b!=0)
                   		 cout <<a<<" / "<<b<<" = "<<fixed<<setprecision(2)<<double(a)/b<<endl;
                	else
                	    cout <<"Loi chia 0\n";
                break;
            }
            system ("pause");
        }
        else
            break;
    }while(true);
    return 0;
}
