#include <iostream>
#define MAX 100
using namespace std;
struct stack
{
	int top;
	int A[MAX];
};
void Init(stack &s)
{
	s.top = -1;
}
void Push(stack &s, int x)
{
	if (s.top != 100)
	{
		s.A[++s.top] = x;
	}
}
void Input(stack &s, int n)
{
	for (int i = 0; i < n; i++)
	{
		int x;
		cout << "Enter element: ";
		cin >> x;
		Push(s, x);
	}
}
void Output(stack s)
{
	for (int i = s.top; i > -1; i--)
	{
		cout << s.A[i] << endl;
	}
	cout << endl;
}
int Dec_Bi(int x)
{
	int rem, i = 1, sum = 0;
	do
	{
		rem = x % 2;
		sum = sum + (i*rem);
		x = x / 2;
		i = i * 10;
	} while (x > 0);
	return sum;
}
void ConvertD_B(stack &s)
{
	for (int i = s.top; i > -1; i--)
	{
		s.A[i] = Dec_Bi(s.A[i]);
	}
}
int main()
{
	stack s;
	int n;
	cout << "Enter the size of the stack: ";
	cin >> n;
	Init(s);
	Input(s, n);
	cout << "Display: \n";
	Output(s);
	cout << "Convert stack fromt Decimal number to Binary number: \n";
	ConvertD_B(s);
	Output(s);
	system("pause");
	return 0;
}