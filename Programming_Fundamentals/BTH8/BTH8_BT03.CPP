#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int arr[100],a;
    cout <<"Nhap vao chieu dai mang: ";
    cin >>a;
    cout <<"Nhap vao cac phan tu: ";
    for (int i = 0; i <= a - 1; i++){
    	arr[i]= rand()%100;
    	cout <<"arr["<<i<<"]"<<" = "<<arr[i]<<"  ";
    	if (i % 10 == 0 && i == 0)
    		cout <<endl;
    
    }
    int max = arr[0];
    for (int i = 0; i <= a - 1; i++){
        if (max < arr[i])
            max = arr[i];
    }
    cout <<endl;                
    cout <<"Phan tu lon nhat co trong mang la: "<<max;
    cout <<endl;
    system("pause");
    return 0;
}
