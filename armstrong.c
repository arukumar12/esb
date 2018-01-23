#include <stdio.h>
int main()
{
    int number, a, r, result = 0;
    printf("Enter a 4 digit integer: ");
    scanf("%d", &number);
    i = number;
    while (a != 0)
    {
        r = a%10;
        result += r*r*r;
        a /= 10;
    }
    if(result == number)
        printf("%d  Armstrong number.",number);
    else
        printf("%d  not Armstrong number.",number);

    return 0;
}
