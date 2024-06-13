#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int MaxSize;
    int length;
} SqList;

void del_s_t(SqList *l, int s, int t);

void del_s_t(SqList *l, int s, int t) {

    int k=0;

    if (l->length==0) printf("顺序表为空");
    else if (s>=t) printf("s或t不合理");
    else {
        for (int i=0; i< l->length; i++) {
            if (l->data[i] >= s && l->data[i] <= t) k++;
            else l->data[i-k] = l->data[i];
        }
        l->length -= k;
    }
    
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

    del_s_t(&l, 1, 6);

    for (int i=0; i<l.length; i++) {
        printf("%4d", l.data[i]);
    }

    printf("\n%d\n", sizeof(l));
    printf("%d\n", sizeof(l.data));
    printf("%d\n", l.length);


    free(l.data);
    l.data=NULL;
}