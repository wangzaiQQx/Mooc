#define MaxSize 50
#include <stdio.h>

typedef struct {
    int data[MaxSize];
    int length;
} SqList;

void func(SqList *l); 

void func(SqList *l) {
    if (l->length == 0) {
        printf("顺序表为空\n");
        return;
    }
    
    int min = l->data[0];
    int index = 0;
    for (int i = 1; i < l->length; i++) {
        if (l->data[i] < min) {
            min = l->data[i];
            index = i;
        }
    }
    
    l->data[index] = l->data[l->length - 1];
    l->length--;
}

int main() {
    SqList l;
    int n=10;

    l.length=0;

    for (int i=0; i<n; i++) {
        l.data[i]=i;
        l.length++;
    }


    func(&l);

    for (int i=0; i<l.length; i++) {
        printf("%4d", l.data[i]);
    }
    printf("\n%d", l.length);
}