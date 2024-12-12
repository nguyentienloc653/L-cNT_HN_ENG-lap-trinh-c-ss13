#include <stdio.h>
int ucln(int a, int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int a, b;
    printf("Nhap vaoso nguyen thu nhat: ");
    scanf("%d",&a);
    printf("Nhao vao so nguyen thu hai :");
    scanf("%d",&b);
    int result = ucln(a, b);
    printf("UCLN la: %d",result);
}
