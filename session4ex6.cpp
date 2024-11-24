#include <stdio.h>

int main() {
    int old, neww, consum;
    long total = 0;
	 
    printf("Nhap chi so cu: ");
    scanf("%d", &old);

    printf("Nhap chi so moi: ");
    scanf("%d", &neww);

    if (neww < old) {
        printf("Chi so moi khong hop le\n");
        return 1;
    }
    consum = neww - old;
    if (consum <= 50) {
        total = consum * 10000;
    } else if (consum <= 100) {
        total = 50 * 10000 + (consum - 50) * 15000;
    } else if (consum <= 150) {
        total = 50 * 10000 + 50 * 15000 + (consum - 100) * 20000;
    } else if (consum <= 200) {
        total = 50 * 10000 + 50 * 15000 + 50 * 20000 + (consum - 150) * 25000;
    } else {
        total = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (consum - 200) * 30000;
    }
    printf("So dien tieu thu: %d kWh\n", consum);
    printf("Tong tien dien: %ld VND\n", total);
    
    return 0;
}

