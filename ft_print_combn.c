#include <unistd.h>
void ft_print_combn(int n) {
    char comb[n];
    
    void print_comb(int index, int next_digit) {
        if (index == n) {
            write(1, comb, n);
            if (comb[0] != '9' - n + 1) {  // Check if the combination is the last one
                write(1, ", ", 2);
            }
            return;
        }
        for (char digit = next_digit; digit <= '9'; digit++) {
            comb[index] = digit;
            print_comb(index + 1, digit + 1);
        }
    }
    
    print_comb(0, '0');
}