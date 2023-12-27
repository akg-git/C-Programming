/*Set all even bits of a number*/
#include <stdio.h>

int setAllEvenBits(int n) {
    int count = 0, res = 0,temp;

    for (temp = n; temp > 0; temp >>= 1) {
        if (count % 2 == 1)
            res = res |(1 << count);
        count++;
    }
    return (n | res);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("%d", setAllEvenBits(n));
    return 0;
}
