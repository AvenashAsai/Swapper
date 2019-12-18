#include <stdio.h>
void swap(int *, int*);
int main(void){
int a,b;
printf("Enter a\n");
scanf("%d",&a);
printf("Enter b\n");
scanf("%d",&b);
printf("a=%d\nb=%d\n",a,b);
swap(&a,&b);
printf("After Swapping\n");
printf("a=%d\nb=%d\n",a,b);
return 0;
}
void swap(int *a,int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}
