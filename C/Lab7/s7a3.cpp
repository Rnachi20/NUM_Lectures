#include <stdio.h>

int main() {
    int s = 0, n, i, a[n];
    printf("N too: ");
    scanf("%d", &n);
    printf("%d shirheg too oruulna uu: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    while (s < n-1) {
        if (a[s] != a[n-1]) {
            printf("Husnegt tegsh hemgui bn.\n");
            return 0;
        }
        s++;
        n--;
    }
    printf("husnegt tegsh hemtei bn.\n");
    return 0;
}

