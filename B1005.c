#include<stdio.h>
#include<stdlib.h>

#define LIST_INIT_SIZE 100
#define INCREMENT_SIZE 50
typedef struct{
    int *base;
    int length;
    int listSize;
}SqList;


int Init(SqList *L){
    L = (SqList*)molloc(LIST_INIT_SIZE * sizeof(int));
    L->length = 0;
    L->listSize = LIST_INIT_SIZE;
    if(L)
        return 0;
    else
        return 1;
}
int SortInsert(Sqlist *L, int e){    

}
int main(){
    
}
