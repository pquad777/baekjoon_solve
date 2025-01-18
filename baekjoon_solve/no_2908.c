#include <stdio.h>

void swap(char arr[]) {
    char tmp = arr[0];
    arr[0] = arr[2];
    arr[2] = tmp;
}

int main() {
    char arr1[4];
    char arr2[4];

    scanf("%s %s", arr1, arr2);
    swap(arr1);
    swap(arr2);
    int i = 0;
    while (1) {

        if (arr1[i] != arr2[i]) {
            if (arr1[i] - '0' > arr2[i] - '0') {
                printf("%s", arr1);
                break;
            }
            else printf("%s", arr2);
            break;
        }
        i++;
    }
}