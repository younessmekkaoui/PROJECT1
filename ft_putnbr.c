#include <unistd.h>  

void ft_putnbr(int nb) {
    char digit;

    if (nb == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0) {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }
    digit = (nb % 10) + '0';
    write(1, &digit, 1);
}