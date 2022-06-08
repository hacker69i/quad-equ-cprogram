#include<stdio.h>
#include<math.h>
int main()
{
    float a=0,b=0,c=0,root=0,root1=0,root2=0,root3=0;
    printf("\nEnter the value of a, b and c as in quadratic equation ax2 + bx + c = 0 :");
    scanf("%f%f%f",&a,&b,&c);
    root=b*b-(4*a*c);
    if(root>0)
    {
    root3=pow(root,0.5);
    root1=(-b+root3)/(2*a);
    root2=(-b-root3)/(2*a);
    printf("\nBoth roots are different and unique\nRoot 1 = %.2f\nRoot 2 %.2f",root1,root2);
        
    }
    else if(root<0)
    {
    root3=pow(-root,0.5)/(2*a);
    root1=(-b)/(2*a);
    printf("\nBoth roots are imaginary\nRoot 1 = %.2f + %.2fi\nRoot 2 = %.2f -%.2fi",root1,root3,root1,root3);
    }
    else if(root==0)
    {   root1=(-b)/(2*a);
        printf("\nBoth roots are equal\n Roots = %.2f",root1);
    }
}
