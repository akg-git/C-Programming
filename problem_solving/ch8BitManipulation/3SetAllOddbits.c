/*Set all odd bits*/

#include <stdio.h>

int setAllOddBits(int n) {
    int count = 0;
    int res = 0;
    int temp;
    for (temp = n; temp > 0; temp >>= 1) {
        if (count % 2 == 0)
            res |= (1 << count);
        count++;
    }
    return (n | res);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("%d", setAllOddBits(n));
    return 0;
}

