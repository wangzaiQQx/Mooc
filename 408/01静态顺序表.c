#include <stdio.h>
#define MaxSize 10

typedef struct {
    int data[MaxSize];
    int length;
} SqList;

void ListInsert(SqList *L, int i, int e) {
    if (i < 1 || i > L->length + 1) {
        printf("Insertion position is invalid.\n");
        return;
    }
    for (int j = L->length; j >= i; j--) {
        L->data[j] = L->data[j - 1];
    }
    L->data[i - 1] = e;
    L->length++;
}


int main() {
    SqList L;
    L.length = 0;
    // 正确的插入方式是从逻辑上的第一个位置开始
    ListInsert(&L, 1, 1); // 插入1到位置1
    ListInsert(&L, 2, 2); // 插入2到位置2
    ListInsert(&L, 3, 3); // 插入3到位置3
    // 现在顺序表中有三个元素，位置1,2,3分别存放1,2,3

    // 插入5到位置3
    ListInsert(&L, 3, 5);

    // 打印顺序表内容
    for (int i = 0; i < L.length; i++) {
        printf("%d ", L.data[i]);
    }
    printf("\n");
    printf("%d\n",L.length);
    printf("%d\n",sizeof(L));

    return 0;
}