#include <stdio.h>

void countCall() {
    static int counter = 0; 
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}
//กรณีที่ 1 (static)  ค่าเพิ่มขึ้นทุกครั้ง
//กรณีที่ 2 (non-static)  ค่าเท่าเดิมทุกครั้ง (เริ่มใหม่)
// ความแตกต่างของ Static กับ Non-Static คือ	เริ่มใหม่ทุกครั้งที่เรียกกับจะถูกสร้างใหม่เสมอ
//static เหมาะกับการนับ, จำค่ารอบ
//non-static เหมาะกับค่าชั่วคราว ที่ไม่ต้องจำ
