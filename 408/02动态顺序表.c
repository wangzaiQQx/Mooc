#include <stdio.h>
#include <stdlib.h>

#define InitSize 100

typedef struct {
    int *data;
    int MaxSize;
    int length;
} SqList;

int main() {
    SqList L;
    L.MaxSize = 50; // 设置顺序表的最大容量
    L.length = 0;
    L.data = (int *)malloc(sizeof(int) * L.MaxSize); // 使用L.MaxSize分配内存
    if (L.data == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    // 打印分配给L.data的内存大小
    printf("Memory allocated for data: %zu bytes\n", sizeof(int) * L.MaxSize);

    // ... 其他操作 ...

    // 释放分配的内存
    free(L.data);
    L.data = NULL; // 将指针设置为NULL，避免野指针

    return 0;
}