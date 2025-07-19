#include <stdio.h>
int main() {
    float score = 90.5; 
    printf("Score = %.1f\n", score);
    return 0;
}
int mma(){
 int score = 90.5;
    printf("Score = %d\n", score);  
    return 0;
}


    
// int ได้นับได้แค่ 90 เพราะไม่เอาค่าที่เป็นเศษ
//float ได้ 90.5 ครบตามต้องการ
// ถ้าเลือกใช้ผิดผลลัพธ์จะไม่ออกมาตามที่ต้องการหรือrunไม่ได้ 