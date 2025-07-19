#include <stdio.h>

int main() {
    char nameInitial = 'K';            // ตัวอักษรแรกของชื่อ
    int age = 18;                     // อายุ
    float weight =55;                // น้ำหนัก
    char gender[] = "man";          // เพศ

    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.1f\n", weight);
    printf("gender = %s\n", gender);

    return 0;
}