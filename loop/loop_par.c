/*#include<stdio.h>
int main()
{
    printf("***** Multipication table of 10 **********\n");
    for(int i; i<10; i++ )
    {
        printf("10 * %d = %d\n", i+1, 10*i);
    }




    return 0;

}*/
//#include<stdio.h>
//int main()
//{
//int i, sum = 0, n =10;
//for(i=0; i<=n; i++){
//  sum +=i;

//  int i = 1, sum = 0, n = 10;
//do
//{

/*
        printf("sum %d", sum);
        sum +=i;
        i++;

    }
    while(i<=n);
    return 0;

}

//while(i<=n)
//{
//  sum +=1;
//i++;
// }
//  printf("the value of sum 1 to 10 is %d", sum);
//return 0;

//}*/

/*#include<stdio.h>
int main(){
int i = 0, n =7, factorial=1;
for(i=1; i<=n; i++){
    factorial*=i;
}
printf("The value of factorial %d is %d",n, factorial);

return 0;

}*/
/*
#include<stdio.h>
int main(){
int i =8;

while(i == 8){

        printf("%d\n", i);

}



return 0;}
*/
/*#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i)
    {
        // condition for non-prime
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 1)
    {
        printf("1 is neither prime nor composite.");
    }
    else
    {
        if (flag == 0)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }

    return 0;
}
*/

