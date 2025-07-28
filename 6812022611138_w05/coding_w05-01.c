#include <stdio.h>

int main() {
    char name = 'K';            // ตัวแปล char ใช้เก็บตัวอักษรตัวแรกของชื่อ
    int age = 18;               // ตัวแปร int ใช้เก็บเลขจำนวนเฉพาะ (อายุ)
    float weight = 55.5;        // ตัวแปร float ใช้เก็บเลขที่มีทศนิยม (เลขน้ำหนัก)

    printf("Student %c is %d years old.\n", name, age);       // แสดงชื่อและอายุ
    printf("His weighs is %.1f kg.\n", weight);               // แสดงน้ำหนัก

    return 0;
}