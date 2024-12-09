#include <stdio.h>

int tinhGiaiThua(int n) {
    int giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}
int main() {
    int n;
    printf("Nhap so nguyen bat ky: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Khong tinh duoc giai thua cua so am.\n");
    } else {
        int ketQua = tinhGiaiThua(n);
        printf("Giai thua cua %d la: %d\n", n, ketQua);
    }
}

