#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    scanf("%s", arr);
    int len = strlen(arr);
    int ans = len;
    for (int i = 0; i < len; i++) {
        if (arr[i] == '=') {
            if (arr[i - 1] != 'z') ans--;
            else {
                if (arr[i - 2] == 'd') ans = ans - 2;
                else ans--;
            }
        }
        else if (arr[i] == '-') ans--;
        else if (arr[i] == 'j') {
            if (arr[i - 1] == 'l' || arr[i - 1] == 'n') ans--;
        }
    }

    printf("%d", ans);
}