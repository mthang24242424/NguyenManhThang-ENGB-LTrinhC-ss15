#include <stdio.h>

int main() {
    char text[50] = "hello world"; 
    char kiTu;  
    printf("Nhap vao mot ky tu de xoa: ");
    scanf("%c", &kiTu);
    int i = 0, j = 0;
    while (text[i]) {
        if (text[i] != kiTu) {
            text[j++] = text[i]; 
        }
        i++;
    }
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", kiTu, text);
    return 0;
}
