#include<stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Nhap vao so luong so Fibonacci can in: ");
    scanf("%d", &n);

    printf("day %d so Fibonacci dau tien la:\n", n);

    for (int i = 0; i < n; ++i) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
