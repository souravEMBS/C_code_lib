#include <stdio.h>
#include <stdlib.h>

struct dataBlock{
    int value;
    struct dataBlock* next;
};

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct dataBlock* addNodeToLinkedList(struct dataBlock* head,int value);
struct student *append(struct student * end, struct student * newStudptr); 
void freeLinkedList(struct dataBlock* head);

void traverseLinkedList(struct dataBlock* head);

int main(int argc, char const *argv[]){
    /* code */
    struct dataBlock* head = NULL;

    struct dataBlock* temp;
    int llSize = 0;
    int tempVal;
    printf("Enter the number of values to add: ");
    scanf("%d",&llSize);
    printf("\n");
    for(int i = 0;i<llSize;i++){
        if(i == 0){
            printf("Enter %d value: ",i);
            scanf("%d",&tempVal);
            printf("\n");
            head = addNodeToLinkedList(head,tempVal);
        }
        else{
            printf("Enter %d value: ",i);
            scanf("%d",&tempVal);
            printf("\n");
            temp = addNodeToLinkedList(head,tempVal);
        }
    }
    traverseLinkedList(head);
    if(head != NULL)
        freeLinkedList(head);
    return 0;
}


// struct student *createStudent(char studentName[], int studentAge){
//     struct student *temp;
//     temp = (struct student *)malloc(sizeof(struct student));
//     strcpy(temp->name,studentName);
//     temp->age = studentAge;
//     temp->next = NULL; 
//     return temp;
// }

// struct student *append(struct student * end, struct student * newStudptr){
//     end->next = newStudptr;
//     newStudptr->next = NULL;
//     return newStudptr;
// }

// void printStudents(struct student *start){
//     struct student* temp;
//     temp = start;
//     while(temp != NULL){
//         printf("%s in %d years old\n",temp->name,temp->age);
//         temp = temp->next;
//     }
// }

struct dataBlock* addNodeToLinkedList(struct dataBlock* head,int value){
    /* data */
    struct dataBlock* temp;
    if(head == NULL){
        temp = (struct dataBlock*)malloc(sizeof(struct dataBlock));
        temp->value = value;
        temp->next = NULL; 
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = (struct dataBlock*)malloc(sizeof(struct dataBlock));
        temp = temp->next;
        temp->next = NULL;
        temp->value = value;
    }
    return temp;
}


void traverseLinkedList(struct dataBlock* head){
    struct dataBlock* temp;
    temp = head;
    while(temp != NULL){
        printf("[%d] ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

void freeLinkedList(struct dataBlock* head){
    struct dataBlock* ptr = head;
    struct dataBlock* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
        free(ptr);
        ptr = temp;
    }
}
