#include <stdio.h>
#include <string.h>

int conversion(char a) {
    if (a >= 'A' && a <= 'C') return 3;
    if (a >= 'D' && a <= 'F') return 4;
    if (a >= 'G' && a <= 'I') return 5;
    if (a >= 'J' && a <= 'L') return 6;
    if (a >= 'M' && a <= 'O') return 7;
    if (a >= 'P' && a <= 'S') return 8;
    if (a >= 'T' && a <= 'V') return 9;
    if (a >= 'W' && a <= 'Z') return 10;
    return 0; // 만약 알파벳이 아닌 경우
}


int main() {
    char arr[16];
    scanf("%s", arr);
    int len = strlen(arr);
    int total = 0;

    for (int i = 0; i < len; i++) {
        total += conversion(arr[i]);
    }
    printf("%d", total);
}