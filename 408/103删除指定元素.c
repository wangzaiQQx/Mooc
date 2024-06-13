#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int MaxSize;
    int length;
} SqList;

void del_x(SqList *l, int x);

void del_x(SqList *l, int x) {
    int k = 0;
    for (int i=0; i < l->length; i++) {
        if (l->data[i] == x) k++;
        else l->data[i-k] = l->data[i];
    }
    l->length -= k;
}

int main() {
    SqList l;

    l.length = 0;
    l.MaxSize = 16;
    l.data = (int *)malloc(sizeof(int) * l.MaxSize);

    if (!l.data) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    for (int i=0; i<3; i++) {l.data[i]=i; l.length++;}
    for (int i=3; i<6; i++) {l.data[i]=3; l.length++;}
    for (int i=6; i<9; i++) {l.data[i]=i; l.length++;}

    del_x(&l, 3);

    for (int i=0; i<l.length; i++) {
        printf("%4d", l.data[i]);
    }

    printf("\n%d\n", sizeof(l));
    printf("%d\n", sizeof(l.data));
    printf("%d\n", l.length);


    free(l.data);
    l.data = NULL;
}