#include<iostream>
#include<cstdlib>
#include<ctime>
#define MAX 100
using namespace std;
void CreateArray(int a[], int n)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10 + 1;
		for (int j = i - 1; j >= 0; j--)
		{
			if (a[i] != a[j])
				continue;
			else
			{
				a[i] = rand() % 10 + 1;
				j = i;
			}
		}
	}
}
void Display(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void Count_Sort(int a[], int n)
{
	int max = a[0];
	int output[MAX];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	cout << "Max value is " << max << endl;
	cout << "The size of count array is " << max + 1 << endl;
	int *count = new int[max+1];
	cout << "Init count array: ";
	for (int i = 0; i <= max; i++)
	{
		count[i] = 0;
		cout << count[i] << " ";
	}
	cout << "\nCount value: ";
	for (int i = 0; i < n; i++)
	{
		count[a[i]]++;
	}
	for (int i = 0; i <= max; i++)
	{
		cout << count[i] << " ";
	}
	cout << "\n Store the cumulative count of each array\n";
	for (int i = 1; i <= max; i++)
	{
		count[i] += count[i - 1];
	}
	for (int i = 0; i <= max; i++)
	{
		cout << count[i] << " ";
	}
	cout << "\Find the index and put into the array: ";
	for (int i = n - 1; i >= 0; i--)
	{
		output[count[a[i]] - 1] = a[i];
		cout << output[count[a[i]] - 1] << " ";
		count[a[i]]--;
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = output[i];
	}
	cout << endl;
}
int main()
{
	int a[MAX], n;
	cout << "Enter the lenght of the array: ";
	cin >> n;
	CreateArray(a, n);
	Display(a, n);
	cout << "Count Sort\n";
	Count_Sort(a, n);
	Display(a, n);
	system("pause");
	return 0;
}