#include <stdio.h>
#include <string.h>

int main() {
    char str1[81], str2[81];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("0\n");
    } else if (result < 0) {
        printf("-1\n");
    } else {
        printf("1\n");
    }

    return 0;
}
