#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *next;

  node(int val)
  {
    data = val;
    next = NULL;
  }
};
void insertAthead(node *&head, int val)
{
  node *n = new node(val);

  n->next = head;
  head = n;
}

void insertAtTail(node *&head, int val)
{
  node *n = new node(val);

  node *temp = head;

  if (head == NULL)
  {
    head = n;
    return;
  }
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = n;
}

bool search(node *head, int key)
{
  node *temp = head;
  while (temp != NULL)
  {
    if (temp->data == key)
    {
      return true;
    }
    temp = temp->next;
  }

  return false;
}

void deleteAthead(node *&head)
{
  node *todelete = head;
  head = head->next;

  delete todelete;
}

void deletion(node *&head, int val) //delete nth node
{
  if (head == NULL) //check if linklist is null or not
  {
    return;
  }
  if (head->next == NULL) // delete at first
  {
    deleteAthead(head);
    return;
  }

  node *temp = head;
  while (temp->next->data != val)
  {
    temp = temp->next;
  }

  node *todelete = temp->next;
  temp->next = temp->next->next;

  delete todelete;
}

void display(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }

  cout << "NULL" << endl;
}

int main()
{
  node *head = NULL;
  insertAtTail(head, 1);
  insertAtTail(head, 2);
  insertAtTail(head, 3);
  display(head);
  insertAthead(head, 4);
  display(head);
  cout << search(head, 1) << endl;

  //deletion(head, 3);
  deleteAthead(head);
  display(head);
  return 0;
}