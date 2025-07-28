#include <stdio.h>
int main() {
    // เก็บข้อมูล 3 จำนวน
    char name[3][20];      // สามารถเก็บตัวอักษรได้สูงสุด19ตัว
    int age[3];            // อายุ 3 ชุด
    float height[3];       // ส่วนสูง 3 ชุด
    float weight[3];       // น้ำหนัก 3 ชุด
    char grade[3];         // เกรด 3 ชุด

    // รับข้อมูล 3 ครั้ง
    for (int i = 0; i < 3; i++) {
        printf("Enter data for person %d (Name Age Height(cm) Weight(kg) Grade): ", i + 1);
        scanf("%s %d %f %f %c", name[i], &age[i], &height[i], &weight[i], &grade[i]);
        while (getchar() != '\n'); // ลบ newline ก่อนหน้า
    }

    // แสดงหัวตาราง
    printf("\n| %-7s | %-3s | %-10s | %-10s | %-11s |\n", 
           "Name", "Age", "Height(cm)", "Weight(kg)", "Grade Code");
    printf("|---------|-----|------------|------------|-------------|\n");

    // แสดงข้อมูลแต่ละจำนวน
    for (int i = 0; i < 3; i++) {
        printf("| %-7s | %-3d | %-10.1f | %-10.1f | %-11c |\n", 
               name[i], age[i], height[i], weight[i], grade[i]);
    }
    return 0;
}