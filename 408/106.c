#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int MaxSize;
    int length;
}SqList;

int merge(SqList *A, SqList *B, SqList *C);
int merge(SqList *A, SqList *B, SqList *C) {

    int i = 0, j = 0, k = 0;

    C->data = (int *)malloc(sizeof(int) * (A->length + B->length));

    while (i < A->length && j < B->length) {
        if (A->data[i] <= B->data[j]) C->data[k++] = A->data[i++];
        else C->data[k++] = B->data[j++];
    }

    while (i < A->length) {
        C->data[k++] = A->data[i++];
    }

    while (j < B->length) {
        C->data[k++] = B->data[j++];
    }

    C->length = k;

}

int main(){
    SqList A, B, C;

    A.MaxSize = 10;
    A.length = 0;
    A.data = (int *)malloc(sizeof(int) * A.MaxSize);

    for (int i=0; i<10; i++) {A.data[i]=i; A.length++;}

    B.MaxSize = 10;
    B.length = 0;
    B.data = (int *)malloc(sizeof(int) * B.MaxSize);

    for (int i=0; i<6; i++) {B.data[i]=i; B.length++;}

    merge(&A, &B, &C);

    for (int i=0; i<C.length; i++){
        printf("%4d%4d\n",i, C.data[i]);
    }

    free(C.data);
    C.data = NULL;

}
