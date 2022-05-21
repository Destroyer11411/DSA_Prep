// 

// #include <stdio.h>
// #include <stdlib.h>

// struct Node{
//     int data;
//     struct Node *next;
// };

// int main()
// {
//     struct Node* head;
//     struct Node* second;
//     struct Node* third;
//     struct Node* fourth;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     head->data=7;
//     head->next=second;

//     second->data=8;
//     second->next=third;

//     third->data=9;
//     third->next=fourth;

//     fourth->data=10;
//     fourth->next=NULL;
// }




// Traversing an Linked list

// #include<stdio.h>
// #include<stdlib.h>


// struct Node {
//     int data;
//     struct Node * next;
// };


// void traversal (struct Node * p);

// int main()
// {
//     struct Node * head;
//     struct Node * second;
//     struct Node * third;
//     struct Node * fourth;


//     head = (struct Node*) malloc (sizeof(struct node*));
//     second = (struct Node*) malloc (sizeof(struct node*));
//     third = (struct Node*) malloc (sizeof(struct node*));
//     fourth = (struct Node*) malloc (sizeof(struct node*));

//     head->data = 7;
//     head->next = second;

//     second->data = 8;
//     second->next = third;

//     third->data = 9;
//     third->next = fourth;

//     fourth->data = 10;
//     fourth->next = NULL;

//     traversal(head);





// }


// void traversal (struct Node * p)
// {
//     while(p!=NULL)
//     {
//         printf("The data is %d\n",p->data);
//         p = p->next;
//     }
// }





// Inserting at begining

// #include<stdio.h>
// #include<stdlib.h>


// struct Node {
//     int data;
//     struct Node * next;
// };


// void traversal (struct Node * p);

// struct Node * insertatbegining(struct Node * head, int data)
// {
//     struct Node * ptr = (struct Node *) malloc (sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = data;

//     return ptr;
// }





// int main()
// {
//     struct Node * head;
//     struct Node * second;
//     struct Node * third;
//     struct Node * fourth;


//     head = (struct Node*) malloc (sizeof(struct node*));
//     second = (struct Node*) malloc (sizeof(struct node*));
//     third = (struct Node*) malloc (sizeof(struct node*));
//     fourth = (struct Node*) malloc (sizeof(struct node*));

//     head->data = 7;
//     head->next = second;

//     second->data = 8;
//     second->next = third;

//     third->data = 9;
//     third->next = fourth;

//     fourth->data = 10;
//     fourth->next = NULL;

//     traversal(head);
//     // struct Node * new = (struct Node*)malloc(sizeof(struct node*));

//     // new = insertatbegining(head,67);

//     // traversal(new);


//     head = insertatbegining(head,69);
//     printf("After inserting the data at the begining\n");
//     traversal(head);





// }


// void traversal (struct Node * p)
// {
//     while(p!=NULL)
//     {
//         printf("The data is %d\n",p->data);
//         p = p->next;
//     }
// }



// // Case 1
// struct Node * insertAtFirst(struct Node *head, int data){
//     struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
//     ptr->data = data;
 
//     ptr->next = head;
//     return ptr; 
// }





// Inserting at an index

// #include<stdio.h>
// #include<stdlib.h>


// struct Node {
//     int data;
//     struct Node * next;
// };


// struct Node * insertAtIndex (struct Node * head, int data, int index)
// {
//     struct Node* ptr = (struct Node*) malloc (sizeof(struct Node*));
//     struct Node *p = head;
//     int i=0;

//     while(i!=index-1)
//     {
//         p=p->next;
//         i++;
//     }

//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }


// void traversal (struct Node * p);

// int main()
// {
//     struct Node * head;
//     struct Node * second;
//     struct Node * third;
//     struct Node * fourth;


//     head = (struct Node*) malloc (sizeof(struct node*));
//     second = (struct Node*) malloc (sizeof(struct node*));
//     third = (struct Node*) malloc (sizeof(struct node*));
//     fourth = (struct Node*) malloc (sizeof(struct node*));

//     head->data = 7;
//     head->next = second;

//     second->data = 8;
//     second->next = third;

//     third->data = 9;
//     third->next = fourth;

//     fourth->data = 10;
//     fourth->next = NULL;

//     traversal(head);
//     head = insertAtIndex(head,67,2);
//     printf("After inserting at the index 2\n");
//     traversal(head);





// }


// void traversal (struct Node * p)
// {
//     while(p!=NULL)
//     {
//         printf("The data is %d\n",p->data);
//         p = p->next;
//     }
// }






// Inserting at the End 

#include<stdio.h>
#include<stdlib.h>


struct Node {
    int data;
    struct Node * next;
};


void traversal (struct Node * p);

struct Node* insertAtEnd(struct Node * head, int data)
{
    struct Node * ptr = (struct Node*) malloc (sizeof(struct Node *));
    ptr->data = data;
    struct Node *p = head;
    
    while(p->next!=NULL)
    {
        p=p->next;
    }

    p->next =  ptr;
    ptr->next  = NULL;
    return head;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;


    head = (struct Node*) malloc (sizeof(struct node*));
    second = (struct Node*) malloc (sizeof(struct node*));
    third = (struct Node*) malloc (sizeof(struct node*));
    fourth = (struct Node*) malloc (sizeof(struct node*));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 9;
    third->next = fourth;

    fourth->data = 10;
    fourth->next = NULL;

    traversal(head);
    printf("After inserting at the end\n");
    head = insertAtEnd(head,44);
    traversal(head);





}


void traversal (struct Node * p)
{
    while(p!=NULL)
    {
        printf("The data is %d\n",p->data);
        p = p->next;
    }
}