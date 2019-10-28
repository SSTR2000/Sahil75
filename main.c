//Even odd upto n
#include<stdio.h>

int main() {
    int i = 1, j, k;
    printf("Enter the  no. upto which you want to see EVEN and ODD no.");
    scanf("%d", &k);
    a:
    if (i <= k && i % 2 == 0) {
        printf("%d is EVEN\n", i);
        i = i + 1;
        goto a;
    } else if (i <= k && i % 2 != 0) {
        printf("%d is ODD\n", i);
        i = i + 1;
        goto a;
    }
}
