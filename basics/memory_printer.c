#include <stdio.h>

int print_line() { 
    printf("---------------------\n");
    return 0;
}

int print_char_address(char *variable) {
    printf("%p\n", variable);
    return 0;
}

int print_int_address(int *variable) {
    printf("%p\n", variable);
    return 0;
}

int main()
{
    print_line();
    int first_number = 10;
    char first_word[] = "First declared word";
    printf("Allocated spaces: \n");
    // Include this inside loop to print, prompt for input, 
    // Add input to variable and print the address and keep allocating
    print_line();
    print_int_address(&first_number);
    print_char_address(first_word);
    print_line();
    return 0;
}
