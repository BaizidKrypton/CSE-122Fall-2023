#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    char sum[101];
    scanf("%s", sum);

    int len = strlen(sum);


    int count[4] = {0};

    for (int i = 0; i < len; i++) {
        if (sum[i] != '+') {
            count[sum[i] - '0']++;
        }
    }


    char newSum[101];
    int index = 0;

    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < count[i]; j++) {
            newSum[index++] = i + '0';
            if (index < len) {
                newSum[index++] = '+';
            }
        }
    }

    newSum[index] = '\0';

    printf("%s\n", newSum);

    return 0;
}
