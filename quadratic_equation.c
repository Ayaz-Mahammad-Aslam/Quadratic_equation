/*write a program to find  out the roots of a quadratic equation. use proper testing to find checks for real abd complex roots.*/
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,discriminant,root1,root2,realpart,imagepart;
    printf("Enter coefficient a,b and c:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    discriminant = b*b-4*a*c;
    if(discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b -sqrt(discriminant))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if(discriminant == 0)
    {
        root1 = root2 = -b/(2*a);
        printf("root1 = root2 = %.21f;", root1);
    }
    else
    {
        realpart = -b/(2*a);
        imagepart = sqrt(-discriminant)/(2*a);
        printf("root1 = %.2lf + %.2lfi and root2 = %.2f-%.2fi", realpart, imagepart, realpart, imagepart);
    }
    return 0;
}