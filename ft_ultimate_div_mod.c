void ft_ultimate_div_mod(int *a, int *b);
void ft_ultimate_div_mod(int *a, int *b){
    int temp_a=*a;
    *a=temp_a/(*b);
    *b=temp_a%(*b);
    }