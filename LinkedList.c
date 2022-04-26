#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{

    int data;

    //Step 1: Declare pointers to build initial stack.

    struct node * next;

} * head, * temp, * p;

    void push();
    void pop();

int main()
{

    int n, i;

    char ch;

    printf("Enter the length: ");

    scanf("%d", & n);

    //Step 2: Initialize the head node.

    head = (struct node * ) malloc(sizeof(struct node));

    printf("Enter a value for data:");

    //Now assigned memory to the head node, give values to its variables.

    scanf("%d", &head->data);

    head -> next = NULL;

    for (i = 0; i < n - 1; i++)
    {

        push();

    }

        printf("\n\n");

        printf("Top = %d \n\n ", head -> data);

        printf("Do you wish to Pop: y/n:");

        scanf("%s", & ch);

    if (ch == 'y')
    {

        pop();

        printf("\n\n");

        printf("new top = %d\n", head -> data);

        printf("\n\n");

    }

    system("PAUSE");

    return 0;

}

void push()

{
   //Step 3: Create a new node and *temp points to it

    temp = (struct node * ) malloc(sizeof(struct node));

    printf("Enter a value for node->data:");

    //assign values to the variable and point the next pointer as  NULL.

    scanf("%d", & temp -> data);

    temp -> next =

    head = temp;

}
    //Step 5: Write a pop () function that removes the top element.
void pop()

{
    //Step 4: Now temp nodes must point to head node so that it becomes the first head node.

    head = head -> next;

}

/*
 Output Discuss:
 When eshu (tui) run the program, enter the number of nodes  linked-list stack. Then start entering value to the top of the stack.


 If you decide to pop() the top element from list, then the second last entry becomes the top element.
*/
