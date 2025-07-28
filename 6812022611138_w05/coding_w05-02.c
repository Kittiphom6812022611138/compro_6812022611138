#include <stdio.h>
int main() {             
                // ตัวแปรเพื่อรับข้อมูลของuser
    char name[30];        // ชื่อ
    int age;              // อายุ
    float height;         // ส่วนสูง

                    // ตัวแปรเพื่อใช้สำหรับข้อมูลผลการเรียน
    char subject[30];     // ชื่อวิชา
    float grade;          // เกรด
    char symbol;          // ตัวอักษรแทนเกรด

    
    printf("Enter your name, age, and height: ");        // รับข้อมูลจากผู้ใช้ (บรรทัดที่ 1)
    scanf("%s %d %f", name, &age, &height);

   
    printf("Enter subject, grade, and grade symbol: ");  // รับข้อมูลจากผู้ใช้ (บรรทัดที่ 2)
    scanf("%s %f %c", subject, &grade, &symbol);

                                                         // แสดงผลข้อมูลตามรูปแบบที่กำหนด
    printf("%c is %d years old and %.1f centimeters tall.\n", name[0], age, height);
    printf("In subject %c, %c got %.2f which is symbolized as '%c'.\n", subject[0], name[0], grade, symbol);

    return 0;
}