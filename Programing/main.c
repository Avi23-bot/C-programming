//#include<stdio.h>

//int main()
/*{
    int a = 3;
    float b = 4.5;
    char c = 'u';
    int d = 50;

    printf("the vale of a is %d \n", a);
    printf("the vale of a is %f \n", b);
    printf("the vale of a is %c \n", c);
    printf("the sum of a and d  is %d \n", a + d);



    return 0;
}
*/
// Sum of a and b
/*#include<stdio.h>

int main()
{
    int a, b;              //directely located on memory
    printf("Enter the value of  a \n");

    scanf("%d", &a);      // & is an adresss of a
    printf("Enter the value of  b \n");
    scanf("%d" ,&b);

    printf("The sum of a and b is %d ", a + b);

    return 0;
} */


// Area of the rectangal
/* #include<stdio.h>
int main()
{
    int l, b;
    printf("Enter the value of l \n: ");
    scanf("%d", &l);
    printf("Enter the value of b \n:  ");
    scanf("%d",&b);

    printf("Area of the rectangal of l and b is %d: ", l*b);

    or,
    int l  = 4, b = 5;
    int area = l*b;

    printf("Area of the rectangal of l and b is %d: ", area);
    return 0;

} */
//Area of the circle and volume of the cylinder
/*#include<stdio.h>
int main()
{
    int r = 4;
    float pie = 3.14;
    printf("Area of the circle  %f", pie*r*r);
    int h = 5;
    printf("Volume of the cylinder %f", h*pie*r);



    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a = 3, b, c;
    b=c=a;

    printf("the value of a is: %d \n", a);
    printf("the value of b is: %d \n", b);
    printf("the value of c is: %d \n", c);




    return 0;
}*/


//#include<stdio.h>

/*int main()
{
    int num;
    printf("Enter the number \n");
    scanf("%d", &num);
    printf("divisible text return: %d\n", num%97);

    return 0;
}
*/

// IF ELSE CONDITION

//#include<stdio.h>
/*int main()
{
    int a, b;
    printf("Enter your number:\n");
    scanf("%d", &a);


    if(a%2 == 0)
    {
        printf("%d is an Even", a);

    }
    else{
        printf("%d is an odd",a);
    }

}*/
/*#include<stdio.h>
int main()
{
    int age;
    int vapPass = 1;
    printf("Enter your age \n");
    scanf("%d", &age);

    if((age<=70 && age>=18) || (vapPass == 1))
    {
        printf("you are above 18 and below 70 so, we can drive");

    }
    else
    {
        printf("you can not drive");
    }
}
*/
/*#include<stdio.h>
int main(){
    int value;
    printf("Enter your number \n");
    scanf("%d", &value);

//one line if conditions
    (value<5)? printf("Value is less thane 5"):printf("Value is greater thane 5");


return 0;
}*/

/*#include<stdio.h>
int main()
{
    int rating;
    printf("Enter your rating (1-4)\n");
    scanf("%d", &rating);

    switch(rating)
    {
    case 1:
        printf("your rating is 1");
        break;
    case 2:
        printf("your rating is 2");
        break;
    case 3:
        printf("your rating is 3");
        break;
    case 4:
        printf("your rating is 4");
        break;



    default :
        printf("Invalid rating");
        break;





    }

    return 0;

}*/


/*#include<stdio.h>
int main()
{
    int physics, chem, maths;
    float total;
    printf("enter your physics number\n");
    scanf("%d", &physics);
    printf("enter your chem number\n");
    scanf("%d", &chem);
    printf("enter your maths number\n");
    scanf("%d", &maths);
    total = (physics + chem + maths)/3;

    if((total<40) || physics<33 || chem<33||maths<33)
    {
        printf("Your total percentage is %d and Your are Fail", total);

    }
    else
    {
        printf("Your total percentage is %d and Your are pass", total);
    }


}*/
/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    while(a>10)
    {
        printf("%d\n", a);
        a++;

    }


    return 0;
}*/



