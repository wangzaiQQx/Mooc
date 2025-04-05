#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int MaxSize;
    int length;
} SqList;

void search_replace(SqList *l, int x);
void search_replace(SqList *l, int x){
    for (int i=0; i < l->length; i++) {

        if (x == l->data[i]) {
            int temp = l->data[i];
            l->data[i] = l->data[i+1];
            l->data[i+1] = temp;
            break;
        }

        else if (x > l->data[i]  && x < l->data[i+1]){
            
            for (int j = l->length; j > i+1; j--) {
                l->data[j] = l->data[j-1];
            }

            l->length++;
            l->data[i+1] = x;
            break;
        }
    }
}

int main() {
    SqList l;
    l.MaxSize = 50;
    l.length = 0;
    l.data = (int *)malloc(sizeof(int) * l.MaxSize);

    for (int i=0; i<15;i++) {
        l.data[i]=2*i;
        l.length++;
    }

    for (int i=0; i<l.length; i++) {
        printf("%4d", l.data[i]);
    }
    printf("\n");

    search_replace(&l, 12);

    for (int i=0; i<l.length; i++) {
        printf("%4d", l.data[i]);
    }
    printf("\n");

    search_replace(&l, 11);
    
    for (int i=0; i<l.length; i++) {
        printf("%4d", l.data[i]);
    }
    printf("\n");



    free(l.data);
    l.data = NULL;
}