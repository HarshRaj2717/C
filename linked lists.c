#include<stdio.h>
#include<stdlib.h>


struct node{
    int info;
    struct node *next;
}*list;


void creater(){
    struct node *a1;
    a1 = (struct node *)malloc(sizeof(struct node));
    
    if(a1==NULL){
        printf("Node not created.");
    }
    else{
        printf("Enter info (int only) : ");
        scanf("%d", &a1->info);

        struct node * ptr = list;
        if(list==NULL){
            list = a1;
        }
        else{
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = a1;
        }
    }
}


void inserter(){
    
}


void displayer(){
    struct node *ptr = list;
    if(list==NULL){
        printf("Linked list is empty.");
    }
    else{
        while (ptr != NULL)
        {
            printf("%d ", ptr->info);
            ptr = ptr->next;
        }
    }
}


void deleter(){
    int pos, i=0;
    printf("Enter position to delete : ");
    scanf("%d", &pos);
    struct node *ptr, *temp;
    if(list==NULL){
        printf("Linked list is empty.");
    }
    else{
        while ((i < pos) && (ptr != NULL))
        {
            ptr = ptr->next;
            i++;
        }

    }
}


void searcher(){

}


int main(){
    for(int i=0;i<4;i++){
        creater();
    }
    displayer();
    return 0;
}