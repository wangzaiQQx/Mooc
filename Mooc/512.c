#include <stdio.h>
int main() {
    long long profit; // 使用long long类型以支持大额利润输入
    double bonus = 0.0;
    
    scanf("%lld", &profit); // 注意输入格式应匹配"%lld"

    // 根据不同利润区间计算奖金
    if (profit <= 100000) {
        bonus = profit * 0.10;
    } else if (profit <= 200000) {
        bonus = 100000 * 0.10 + (profit - 100000) * 0.075;
    } else if (profit <= 400000) {
        bonus = 100000 * 0.10 + 100000 * 0.075 + (profit - 200000) * 0.05;
    } else if (profit <= 600000) {
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + (profit - 400000) * 0.03;
    } else if (profit <= 1000000) {
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (profit - 600000) * 0.015;
    } else {
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (profit - 1000000) * 0.01;
    }

    printf("bonus=%lld\n", (long long)bonus); // 将double类型的bonus转换为long long后输出

    return 0;
}