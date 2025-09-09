#include <stdio.h>

int main() {
    int start, stop;
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter stop number: ");
    scanf("%d", &stop);

    printf("Start number is %d and stop number is %d\n", start, stop);
    for (int i = 4; i <=10; i++) {
        printf("-");
    }
    printf("\nSequence from start to stop: ");
    for (int i = start; i <= stop; i++) {
        printf("%d ", i);
    }
    printf("\nThank you.\n");
    return 0;
}

/*รับค่าตัวเลขจากผู้ใช้ 2 ค่า → start และ stop
พิมพ์ค่าที่รับมาแสดงผล เช่น Start number is 4 and stop number is 10
ใช้ for loop รันตัวเลขตั้งแต่ start ไปจนถึง stop 
พิมพ์ลำดับตัวเลขออกมาต่อกันในบรรทัดเดียว
ปิดท้ายด้วยคำว่า "Thank you."*/