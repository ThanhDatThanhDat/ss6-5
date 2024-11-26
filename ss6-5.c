#include <stdio.h>

int main() {
    int year, month;

    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Thang khong hop le! Vui long nhap thang trong khoang 1-12.\n");
        return 1; 
    }

    int sum;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        sum = 31;
    }else if (month == 4 || month == 6 || month == 9 || month == 11) {
        sum = 30;
    }else {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            sum = 29; 
        } else {
            sum = 28; 
        }
    }
    printf("Thang %d cua nam %d co %d ngay.\n", month, year, sum);

    return 0;
}

