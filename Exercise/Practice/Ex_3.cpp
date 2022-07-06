#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Node
{
    int info;
    Node *link;
};
Node *CreateNode(int init_info)
{
    Node *p = new Node;
    p->info = init_info;
    p->link = NULL;
    return p;
}
struct LinkedList
{
    Node *first;
};
void CreateList(LinkedList &l)
{
    l.first = NULL;
}
void AddFirst(LinkedList &l, Node *node)
{
    node->link = l.first;
    l.first = node;
}
void AddLast(LinkedList &l, Node *node)
{
    if (l.first == NULL)
    {
        l.first = node;
    }
    else
    {
        Node *p = l.first;
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = node;
    }
}
void PrintList(LinkedList l)
{
    if (l.first != NULL)
    {
        Node *p = l.first;
        while (p != NULL)
        {
            cout << p->info << " ";
            p = p->link;
        }
    }
    cout << endl;
    cout << endl;
}
Node *FindElement(LinkedList l, int element)
{
    Node *p = l.first;
    while (p != NULL && p->info != element)
    {
        p = p->link;
    }
    if (p != NULL)
        return p;
    return NULL;
}
void RemoveFirst(LinkedList &l)
{
    if (l.first != NULL)
    {
        Node *p = l.first;
        l.first = l.first->link;
        delete p;
    }
}
void RemoveLast(LinkedList &l)
{
    if (l.first != NULL)
    {
        Node *p, *q;
        p = l.first;
        q = NULL;
        while (p->link != NULL)
        {
            q = p;
            p = p->link;
        }
        if (p != l.first)
        {
            q->link = NULL;
        }
        else
        {
            l.first = NULL;
        }
        delete p;
    }
}
void RemoveElement(LinkedList &l, int data)
{
    Node *p = new Node;
    if (l.first->info == data)
    {
        RemoveFirst(l);
        return;
    }
    Node *d = l.first;
    while (d->link != NULL)
    {
        d = d->link;
    }
    if (d->info == data)
    {
        RemoveLast(l);
        return;
    }
    for (Node *k = l.first; k != NULL; k = k->link)
    {
        if (k->info == data)
        {
            p->link = k->link;
            delete k;
            return;
        }
        p = k;
    }
}
void IncreasingList(LinkedList l)
{
    Node *temp = new Node;
    for (Node *p = l.first; p != NULL; p = p->link)
    {
        for (Node *q = p->link; q != NULL; q = q->link)
        {
            if (p->info > q->info)
            {
                temp->info = p->info;
                p->info = q->info;
                q->info = temp->info;
            }
        }
    }
}
void DecreasingList(LinkedList l)
{
    Node *temp = new Node;
    for (Node *p = l.first; p != NULL; p = p->link)
    {
        for (Node *q = p->link; q != NULL; q = q->link)
        {
            if (p->info < q->info)
            {
                temp->info = p->info;
                p->info = q->info;
                q->info = temp->info;
            }
        }
    }
}

int main()
{
    LinkedList list;
    CreateList(list);
    Node *node;
    srand(time(0));
    int  x, f, l, n, elemment;
    cout << "Enter the size of the list: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> elemment;
        node = CreateNode(elemment);
        AddLast(list, node);
    }
    PrintList(list);
    cout << "Enter element add at the beginning: ";
    cin >> f;
    node = CreateNode(f);
    AddFirst(list, node);
    cout << "--> New list: ";
    PrintList(list);
    cout << "Enter element add at the end: ";
    cin >> l;
    node = CreateNode(l);
    AddLast(list, node);
    cout << "--> New list: ";
    PrintList(list);
    cout << "Remove the first element: ";
    cout << "\n--> New list: ";
    RemoveFirst(list);
    PrintList(list);
    cout << "Remove the last element: ";
    cout << "\n--> New list: ";
    RemoveLast(list);
    PrintList(list);
    cout << "Enter element to find and remove: ";
    cin >> x;

    if (FindElement(list, x) != NULL)
    {
        RemoveElement(list, x);
        cout << "--> New list: ";
        PrintList(list);
    }
    else
    {
        cout << "Not found!\n";
        cout << endl;
    }
    cout << "*** Convert this list to ordered list \n";
    cout << "--> Increasing list: ";
    IncreasingList(list);
    PrintList(list);
    cout << "--> Decreasing list: ";
    DecreasingList(list);
    PrintList(list);
    system("pause");
    return 0;
}