#include <stdio.h>
#include <ctype.h>

int main() {
    char str1[101], str2[101];
    scanf("%s", str1);
    scanf("%s", str2);

    int len = strlen(str1);

    for (int i = 0; i < len; i++) {
        char ch1 = tolower(str1[i]);
        char ch2 = tolower(str2[i]);

        if (ch1 < ch2) {
            printf("-1\n");
            return 0;
        } else if (ch1 > ch2) {
            printf("1\n");
            return 0;
        }
    }

    printf("0\n");
    return 0;
}
