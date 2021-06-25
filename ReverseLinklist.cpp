#include <iostream>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  Node(int data)
  {
    this->data = data;
    next = NULL;
  }
};

struct Linklist
{
  Node *head;
  Linklist() { head = NULL; }
  void reverse()
  {
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr != NULL)
    {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    head = prev;
  }

  void print()
  {
    struct Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
  }

  void push(int data)
  {
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
  }
};

int main()
{
  Linklist l;
  l.push(3);
  l.push(90);
  l.push(2);
  l.push(20);

  cout << "Given Linklist\n";
  l.print();

  l.reverse();
  cout << "\n";
  cout << "Reverse Linklist\n";
  l.print();

  return 0;
}