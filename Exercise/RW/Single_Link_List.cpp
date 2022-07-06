// Danh sách liên kết đơn
#include <iostream>
using namespace std;
struct Node
{
    int info;
    Node *link;
};
Node *first;
// Create the list (empty list)
void init()
{
    first = NULL;
}
// Create the node
Node *createnode(int x)
{
    Node *p = new Node;
    if (p == NULL)
    {
        cout << "Not enough memory to located\n";
    }
    else
    {
        p->link = NULL;
        p->info = x;
    }
    return p;
}
// Browse the linked list (display each element in the list)
void Process_list()
{
    Node *p;
    p = first;
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->link;
    }
    cout << endl;
}
// Find one element in the list
Node *Search(int x)
{
    Node *p = first;
    while (p != NULL && p->info != x)
        p = p->link;
    return p;
}
// Add one element into the list: at the beginning, at the end or after a node q
// 1. Add an element at the beginning
void Insert_first(int x)
{
    Node *p;
    p = new Node;
    p->info = x;
    p->link = first;
    first = p;
}
// 2. Add an element at the end
void Insert_last(int x)
{
    Node *p;
    p = new Node;
    p->info = x;
    p->link = NULL;
    if (first == NULL) // only first pointer(empty list)
        first = p;
    else
    {
        Node *q = first;
        while (q->link != NULL)
            q = q->link;
        q->link = p;
    }
}
// 3. Add an element after an element q
void Insert_mid(int x, int q)
{
    Node *p;
    p = createnode(x);
    Node *Q;
    Q = Search(q);
    p->link = Q->link;
    Q->link = p;
}
// Add one element into the list: at the beginning, at the end or after a node q
// 1. Remove an element at the beginning list
void Delete_first()
{
    if (first != NULL)
    {
        if (first != NULL)
        {
            Node *p;
            p = first;
            first = first->link;
            delete p;
        }
    }
}
// 2.Remove an element at the end list
void Delete_last()
{
    if (first != NULL)
    {
        Node *p;
        p = first;
        Node *q;
        while (p->link != NULL)
        {
            q = p;
            p = p->link;
        }
        if (p != first)
            q->link = NULL;
        else
            first = NULL;
        delete p;
    }
}
// 3. Remove an element after node q
void Delete_mid(int x)
{
    if (first != 0)
    {
        Node *q;
        q = Search(x);
        Node *temp;
        if (q!=first)
        { 
        temp = q->link;
        q->link = temp->link;
        }
        else
        {
            first->link = NULL;
        }
        delete temp;
    }

}
int main()
{
    init();
    int x, n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter element: ";
        cin >> x;
        Node *p = createnode(x);
        Insert_last(x); // Insert_first
    }
    Process_list();
    int s, z;
    cout << "Enter value of element that need to add: ";
    cin >> s;
    cout << "Enter the element of node that need to add after: ";
    cin >> z;
    Insert_mid(s, z);
    Process_list();
    cout << "Remove the first element\n";
    Delete_first();
    Process_list();
    cout << "Remove the last element\n";
    Delete_last();
    Process_list();
    cout << "Remove the last element after node q\n";
    cout << "Enter the element that need to remove after: ";
    int r;
    cin >> r;
    Delete_mid(r);
    Process_list();
    return 0;
}