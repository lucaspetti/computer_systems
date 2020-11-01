#include <stdio.h>

void print_line() { printf("---------------------\n"); }

int print_char_address(char *variable) { printf("%p\n", variable); }

int print_int_address(int *variable) { printf("%p\n", variable); }

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
