#include <stdio.h>
#include <string.h>
int hi(char* p) {
    int l = strlen(p);
    if (l != 10) {
        return 0;
    }
    for (int i = 0; i < l; i++) {
        if (p[i] < '0' || p[i] > '9') {
            return 0;
        }
    }
    return 1;
}

int main() {
    char p[15];
    scanf("%s", p);
    if (hi(p)) {
        printf("Valid
");
    } else {
        printf("Invalid
");
    }
    return 0;
}
