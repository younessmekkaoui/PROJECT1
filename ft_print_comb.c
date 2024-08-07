#include <unistd.h>  

void ft_print_comb(void) {
    char digits[5];

    for (digits[0] = '0'; digits[0] <= '7'; digits[0]++) {
        for (digits[1] = digits[0] + 1; digits[1] <= '8'; digits[1]++) {
            for (digits[2] = digits[1] + 1; digits[2] <= '9'; digits[2]++) {
                digits[3] = ',';
                digits[4] = ' ';
                write(1, digits, 3);
                if (!(digits[0] == '7' && digits[1] == '8' && digits[2] == '9')) {
                    write(1, &digits[3], 2);
                }
            }
        }
    }
}