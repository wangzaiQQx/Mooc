#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int MaxSize;
    int length;
} SqList;

void del_dup(SqList *l);
void del_dup(SqList *l){
    int k=0;
    for (int i=1; i < l->length; i++) {
        if (l->data[i]==l->data[i-1]) k++;
        else l->data[i-k] = l->data[i];
    }
    l->length -= k;
}


int main() {
    SqList l;
    l.MaxSize = 50;
    l.length = 0;
    l.data = (int *)malloc(sizeof(int) * l.MaxSize);

    if (!l.data) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    for (int i=0; i<3; i++) {l.data[i]=i; l.length++;}
    for (int i=3; i<6; i++) {l.data[i]=3; l.length++;}
    for (int i=6; i<9; i++) {l.data[i]=i; l.length++;}
    
    del_dup(&l);

    for (int i=0; i<l.length; i++) {
        printf("第%d项=%-4d\n", i+1, l.data[i]);
    }

    printf("结构体大小\t%d\n", sizeof(l));
    printf("指针大小\t%d\n", sizeof(l.data));
    printf("顺序表长度\t%d\n", l.length);


    free(l.data);
    l.data = NULL;
}