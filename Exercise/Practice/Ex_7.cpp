#include <iostream>
using namespace std;
#define MAX 100
int a[MAX];
int front, rear;
void Init(int a[], int &front, int &rear)
{
    front = -1;
    rear = -1;
}
int isEmpty(int a[], int front, int rear)
{
    if (front == -1)
        return 1;
    return 0;
}
int isFull(int a[], int front, int rear)
{
    if (rear - front == MAX - 1 || rear - front == -1)
        return 1;
    return 0;
}
void Push(int a[], int &front, int &rear, int x)
{
    if (isFull(a, front, rear) == 1)
        cout << "Full queue\n";
    else
    {
        if (isEmpty(a, front, rear) == 1)
            front = 0;
        if (rear == MAX - 1)
        {
            for (int i = front; i <= rear; i++)
                a[i - front] = a[i];
            rear = MAX - 1 - front;
            front == 0;
        }
        a[++rear] = x;
    }
}
void Pop(int a[], int &front, int &rear, int &x)
{
    if (isEmpty(a, front, rear) == 1)
        cout << "Emtpy queue\n";
    else
    {
        x = a[front++];
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}
void Display(int a[], int front, int rear)
{
    for (int i = front; i <= rear; i++)
    {
        cout << a[i] << endl;
    }
}
int main()
{
    int a[MAX], front, rear, n, x;
    cout << "Enter the size of the queue: ";
    cin >> n;
    Init(a, front, rear);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> x;
        Push(a, front, rear, x);
    }
    Display(a, front, rear);
    cout << "***Pop queue***";
    int e;
    cout << "Enter element need to pop: ";
    cin >> e;
    Pop(a, front, rear, e);
    Display(a, front, rear);
    return 0;
}