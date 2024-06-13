#include <Stdio.h>
#define MaxSize 50

typedef struct {
    int data[MaxSize];
    int length;
}SqList;

void reverse(SqList *l);
void reverse(SqList *l) {
    int temp;
    for (int i=0; i<l->length/2; i++) {
        temp = l->data[i];
        l->data[i] = l->data[l->length - i - 1];
        l->data[l->length - i - 1] = temp;
    }
}

int main() {
    SqList l;
    int n=10;

    l.length=0;

    for (int i=0; i<n; i++) {
        l.data[i]=i;
        l.length++;
    }


    reverse(&l);

    for (int i=0; i<l.length; i++) {
        printf("%4d", l.data[i]);
    }
    printf("\n%d", l.length);
}