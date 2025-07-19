#include <stdio.h>
const int GLOBAL_RATE = 10;

void calculate() {
   
    const int LOCAL_BONUS = 50;
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();
    printf("GLOBAL_RATE in main = %d\n", GLOBAL_RATE);
    return 0;
}
    //GLOBAL_RATE อยู่ข้างนอกฟังก์ชัน ใช้ได้ทุกที่ในโปรแกรม
    //LOCAL_BONUS อยู่ในฟังก์ชัน ใช้ได้แค่ในฟังก์ชันนั้นเท่านั้น
    //runไม่ได้เพราะ const เปลี่ยนค่าไม่ได้
    //เพราะมันอยู่ใน calculate() เท่านั้น
    //const คือค่าคงที่ เปลี่ยนไม่ได้
    //ตัวแปรข้างนอกฟังก์ชัน = ใช้ได้ทั่ว
   //ตัวแปรข้างในฟังก์ชัน = ใช้ได้แค่ในนั้น
   //ถ้าเขียนผิดที่หรือเปลี่ยนค่าจะ runไม่ได้