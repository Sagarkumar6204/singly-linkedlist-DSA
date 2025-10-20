#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
  int data;
  struct node *next;
};
void printll();
void search_e();

void display();
void insert_option(); 
void delete_option();
void search_option();
void insert_begin();
void insert_end();
void insert_random();
void linkedlist();
void delete_begin();
void delete_end();
void delete_random();
struct node *newnode, *head, *temp, *prevnode, *nextnode;
void search_Pos();

int term;
void printll()
{
  newnode = (struct node *)malloc(sizeof(struct node));
  printf("enter the data :");
  scanf("%d", &newnode->data);
  newnode->next = 0;
  if (head == 0)
  {
    head = temp = newnode;
  }
  else
  {
    temp->next = newnode;
    temp = newnode;
  }
}
void display()
{
  printf("\n");
  printf("entered data:\n");
  temp = head;
  while (temp != 0)
  {
    printf("|%d|\t", temp->data);
    temp = temp->next;
  }
}
int insert_choice;
void inser();
void inser()
{
  printf("\n\n");

  printf("Enter Your Choice:");
  scanf("%d", &insert_choice);
  switch (insert_choice)
  {
  case 1:
  {
    insert_option();
  }
  break;
  case 2:
  {
    delete_option();
  }
  break;
  case 3:
  {
    search_option();
  }
  break;
  case 0:
  {
    printf("***THANK YOU***");
    exit(0);
  }

  default:
  {
    printf("wrong choice:\n");
    printf("try again\n\n");
    printf("|----------------------------|\n");
    printf("| WELCOME BACK IN LINKEDLIST |\n");
    printf("|----------------------------|\n\n");
    linkedlist();
    inser();
  }
  break;
  }
}

int main()
{

  system("cls");
  printf("\n");
  printf("|-----------------------|\n");
  printf("| WELCOME IN LINKEDLIST |\n");
  printf("|-----------------------|\n");
  printf("enter the term:");
  scanf("%d", &term);
  for (int i = 1; i <= term; i++)
  {
    printll();
  }
  printf("\nif you want to see entered element PRESS ENTER:\n");
  getch();
  display();
  printf("\n\n");
  linkedlist();
  inser();

  return 0;
}
int condition;
void linkedlist()
{

  printf("\nIf you want to make update on above linkedlist(0,1):");
  scanf("%d", &condition);

  if (condition == 1)
  {
    printf("|---------------------------------------------------|\n");
    printf("|       Choose 1: Insert element in LINKEDLIST      |\n");
    printf("|       Choose 2: Delete element in LINKEDLIST      |\n");
    printf("|       Choose 3: search element in LINKEDLIST      |\n");
    printf("|       Choose 0: To exit                           |\n");
    printf("|---------------------------------------------------|\n");
  }
  else
  {
    exit(0);
  }
}
void insert_option()
{
  printf("\n");
  printf("|--------------------------------------------------|\n");
  printf("| Choose 1: Insert element BEGIN of the LINKEDLIST |\n");
  printf("| Choose 2: Insert element END of the LINKEDLIST   |\n");
  printf("| Choose 3: Insert element RANDOM of the LINKEDLIST|\n");
  printf("| Choose 0: To exit                                |\n");
  printf("|--------------------------------------------------|\n");
  printf("\n\n");
  int option;
  printf("Enter Your Choice:");
  scanf("%d", &option);
  switch (option)
  {
  case 1:
  {
    insert_begin();
  }
  break;
  case 2:
  {
    insert_end();
  }
  break;
  case 3:
  {
    insert_random();
  }
  break;
  case 0:
  {
    printf("** exit successfully **");
    printf("***THANK YOU***\n\n");
    printf("|----------------------------|\n");
    printf("| WELCOME BACK IN LINKEDLIST |\n");
    printf("|----------------------------|\n\n");
    linkedlist();
    inser();
  }
  default:
    if (option != 0)
    {
      printf("Wrong choice:\n");
      printf("try again\n");
      insert_option();
    }

    break;
  }
}

void insert_begin()
{
  newnode = (struct node *)malloc(sizeof(struct node));
  if (newnode == NULL)
  {
    printf("over flow");
  }
  else
  {
    printf("enter data:");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
  }
  int want;
  printf("Want to see entered element(0,1):");
  scanf("%d", &want);
  if (want == 1)
  {
    display();
    printf("\n");
    printf("***THANK YOU***\n");
    getch();
    insert_option();
  }
  else
  {
    printf("***THANK YOU***\n");
    printf("\n");
    getch();
    insert_option();
  }
}
void insert_end()
{
  newnode = (struct node *)malloc(sizeof(struct node));
  printf("enter data to insert:");
  scanf("%d", &newnode->data);
  newnode->next = 0;
  temp = head;
  while (temp->next != 0)
  {
    temp = temp->next;
  }
  temp->next = newnode;
  int want;
  printf("Want to see entered element(0,1):");
  scanf("%d", &want);
  if (want == 1)
  {
    display();
    printf("\n");
    printf("***THANK YOU***\n");
    getch();
    insert_option();
  }
  else
  {
    printf("***THANK YOU***\n");
    printf("\n");
    getch();
    insert_option();
  }
}
void insert_random()
{
  int pos, item, count = 0, i = 1;
  if (newnode == NULL)
  {
    printf("over flow");
  }
  else
  {
    printf("Enter the position you want to insert:");
    scanf("%d", &pos);
    while (temp != 0)
    {
      temp = temp->next;
      count++;
    }

    if (pos > count)
    {
      printf("Invalid position");
    }
    else
    {
      temp = head;

      while (i < pos)
      {
        temp = temp->next;
        i++;
      }
      printf("enter the element:");
      scanf("%d", &newnode->data);
      newnode->next = temp->next;
      temp->next = newnode;
    }
    int want;
    printf("Want to see entered element(0,1):");
    scanf("%d", &want);
    if (want == 1)
    {
      display();
      printf("\n");
      printf("***THANK YOU***\n");
      getch();
      insert_option();
    }
    else
    {
      printf("***THANK YOU***\n");
      printf("\n");
      getch();
      insert_option();
    }
  }
}
void delete_option()
{
  printf("\n");
  printf("|--------------------------------------------------|\n");
  printf("| Choose 1: Delete element BEGIN of the LINKEDLIST |\n");
  printf("| Choose 2: Delete element END of the LINKEDLIST   |\n");
  printf("| Choose 3: Delete element RANDOM of the LINKEDLIST|\n");
  printf("| Choose 0: To exit                                |\n");
  printf("|--------------------------------------------------|\n");
  printf("\n\n");
  int delete;
  printf("Enter your choice:");
  scanf("%d", &delete);
  switch (delete)
  {
  case 1:
  {
    delete_begin();
  }
  break;
  case 2:
  {
    delete_end();
  }
  break;
  case 3:
  {
    delete_random();
  }
  break;

  case 0:
  {
    printf("** exit successfull **\n\n");
    printf("|----------------------------|\n");
    printf("| WELCOME BACK IN LINKEDLIST |\n");
    printf("|----------------------------|\n\n");
    linkedlist();
    inser();
  }

  default:
  {
    if (delete != 0)
    {
      printf("Wrong choice:\n");
      printf("try again\n");
      delete_option();
    }
  }
  break;
  }
}
void delete_begin()
{
  temp = head;
  head = temp->next;
  free(temp);
  int want;
  printf("Want to see entered element(0,1):");
  scanf("%d", &want);
  if (want == 1)
  {
    display();
    printf("\n");
    printf("***THANK YOU***\n");
    getch();
    delete_option();
  }
  else
  {
    printf("***THANK YOU***\n");
    printf("\n");
    getch();
    delete_option();
  }
}
void delete_end()
{
  temp = head;
  while (temp->next != 0)
  {
    prevnode = temp;
    temp = temp->next;
  }
  if (temp == head)
  {
    head = 0;
  }
  else
  {
    prevnode->next = 0;
  }
  free(temp);
  int want;
  printf("Want to see entered element(0,1):");
  scanf("%d", &want);
  if (want == 1)
  {
    display();
    printf("\n");
    printf("***THANK YOU***\n");
    getch();
    delete_option();
  }
  else
  {
    printf("***THANK YOU***\n");
    printf("\n");
    getch();
    delete_option();
  }
}
void delete_random()
{
  int pos, i = 1;
  temp = head;
  printf("enter the position of deletion:");
  scanf("%d", &pos);
  if ((pos < 0) && (term < pos))
  {
    printf("invalid position!!");
    exit(0);
  }
  else
  {
    while (i < pos - 1)
    {
      temp = temp->next;
      i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
  }
  int want;
  printf("Want to see entered element(0,1):");
  scanf("%d", &want);
  if (want == 1)
  {
    display();
    printf("\n");
    printf("***THANK YOU***\n");
    getch();
    delete_option();
  }
  else
  {
    printf("***THANK YOU***\n");
    printf("\n");
    getch();
    delete_option();
  }
}

void search_option()
{
  int search;
  printf("|------------------------------------------------------|\n");
  printf("|       Choose 1: Search by element in LINKEDLIST      |\n");
  printf("|       Choose 2: search by position in LINKEDLIST     |\n");
  printf("|       Choose 0: To exit                              |\n");
  printf("|------------------------------------------------------|\n");
  printf("enter your choice:");
  scanf("%d", &search);
  switch (search)
  {
  case 1:
  {
    search_e();
  }
  break;
  case 2:
  {
    search_Pos();
  }
  break;
  case 0:
  {
    printf("** exit successfull **\n\n");
    printf("|----------------------------|\n");
    printf("| WELCOME BACK IN LINKEDLIST |\n");
    printf("|----------------------------|\n\n");
    linkedlist();
    inser();
  }
  break;

  default:
  {
    if (search != 0)
    {
      printf("Wrong choice:\n");
      printf("try again\n");
      search_option();
    }
  }
  break;
  }
}

void search_e()
{
  int item;
  temp = head;
  int count = 0;
  int flag = 0;
  if (temp == NULL)
  {
    printf("there is no element !!");
    exit(0);
  }
  else
  {
    printf("enter the element to searched:");
    scanf("%d", &item);
    while (temp != 0)
    {
      count++;
      if (item == temp->data)
      {
        printf("element |%d| is found at position (%d)", item, count);
        flag = 0;
        break;
      }
      else
      {
        flag = 1;
      }
      temp = temp->next;
    }
    if (flag == 1)
    {
      printf("element not found!!!");
    }
  }
  int want;
  printf("\nWant to see entered element(0,1):");
  scanf("%d", &want);
  if (want == 1)
  {
    display();
    printf("\n");
    printf("***THANK YOU***\n");
    getch();
    search_option();
  }
  else
  {
    printf("***THANK YOU***\n");
    printf("\n");
    getch();
    search_option();
  }
}

void search_Pos()
{

   int count = 0, pos, i = 1;
    temp = head;
    while (temp != 0)
    {
        count++;
        temp = temp->next;
    }
    printf("enter the position : ");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("invalid position!!");
    }
    else
    {
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        printf("Element found at position(%d) is |%d| ", pos, temp->data);
    }

  int want;
  printf("\nWant to see entered element(0,1):");
  scanf("%d", &want);
  if (want == 1)
  {
    display();
    printf("\n");
    printf("***THANK YOU***\n");
    getch();
    search_option();
  }
  else
  {
    printf("***THANK YOU***\n");
    printf("\n");
    getch();
    search_option();
  }
}