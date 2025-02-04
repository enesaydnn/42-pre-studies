 #include <stdio.h>
 void   ft_ultimate_div_mod(int *a, int *b)
 {
    if(*b!=0 && b!=NULL)
    {
        int temp_a = *a;
        int temp_b = *b;
    *a = temp_a / temp_b;
    *b = temp_a % temp_b;
    }
 }

/*
 int main()
 {
    int num1 = 10; int num2 = 2;
    printf("İşlemden Önceki Değerler : %d %d \n", num1, num2);
    ft_ultimate_div_mod(&num1,&num2);
    printf("İşlemden Sonraki Değerler : %d %d \n",num1,num2);
    return 0;
 }
 */