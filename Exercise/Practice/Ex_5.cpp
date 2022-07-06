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
int Empty(stack s)
{
    if (s.top == -1)
        return 1;
    return 0;
}
int Full(stack s)
{
    if (s.top == MAX - 1)
        return 1;
    return 0;
}
void Push(stack &s, int x)
{
    if (Full(s) == 0)
    {
        s.A[++s.top] = x;
    }
}
int Pop(stack &s)
{
    int x;
    if (!Empty(s))
    {
        x = s.A[s.top--];
    }
    return x;
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
        cout << s.A[i]<<" ";
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
    cout << "Display: ";
    Output(s);
    cout << endl;
    cout << "Pop stack: ";
    Pop(s);
    cout << "Display: ";
    Output(s);
    return 0;
}