#include <unistd.h>  

void ft_print_comb2(void) {
    char digits[7];

    for (int i = 0; i <= 98; i++) {
        for (int j = i + 1; j <= 99; j++) {
            digits[0] = (i / 10) + '0';
            digits[1] = (i % 10) + '0';
            digits[2] = ' ';
            digits[3] = (j / 10) + '0';
            digits[4] = (j % 10) + '0';
            if (i != 98 || j != 99) {
                digits[5] = ',';
                digits[6] = ' ';
                write(1, digits, 7);
            } else {
                write(1, digits, 5);
            }
        }
    }
}