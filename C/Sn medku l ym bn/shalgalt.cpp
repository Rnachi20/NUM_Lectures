#include <stdio.h>

void functionB(int b) {
    printf("Function B-? ????? ??????????\n");
    printf("Function B-? ????? ?????????? ????: %d\n", b);
}

void functionA(int a) {
    printf("Function A-? ????? ??????????\n");
    printf("Function A-? ????? ?????????? ????: %d\n", a);

    // Function B-? ??????
    functionB(a * 2);
}

int main() {
    int x = 5;
    printf("Main ????? ??????????\n");
    printf("Main ????? ?????????? ????: %d\n", x);

    // Function A-? ??????
    functionA(x + 3);

    return 0;
}





