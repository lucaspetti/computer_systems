#include <stdio.h>

int main()
{
    printf("Starting...\n");
    int i;
    int k, *ip;
    printf("i is %d and k is %d\n", i, k);

    ip = &i; // Sets ip to reference address of i
    printf("i is at address %p\n", ip);

    printf("Now setting i to 100...\n");
    i = 100;
    printf("Now setting k to value stored at address %p\n", ip);
    k = *ip; // Sets k to dereferenced ip. That is, value stored at that address
    printf("Now k is %d\n", k);

    printf("Now adding 2 to k...\n");
    k = k + 2;
    printf("Now k is %d and i is %d\n", k, i);
    // i = *(&k); IS THE SAME AS i = k
    // *(&k) = 200; SAME AS k = 200
    return 0;
}
