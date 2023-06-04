#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


double pow_(int a, int b) {
    double k = 1.0;
    if (b == 0) {
        return 1.0;
    }
    if (b > 0) {
        while (b > 0) {
            k *= a;
            b--;
        }
    } else {
        while (b < 0) {
            k /= a;
            b++;
        }
    }
    return k;
}

int main() {
    int a,b;
    scanf("%d %d",&a, &b);
    if (b < 0) {
        double f = pow_(a,b);
        printf("%lf", f);
    } else {
        printf("%ld", (long)pow_(a,b));
    }
    return 0;
}