#include<stdio.h>
int main()
{
	int a,b;
	int *ptr1,*ptr2;
	ptr1=&a;//1000
	ptr2=&b;//2000 address
	scanf("%d %d",&a,&b);//10,20
	update(ptr1,ptr2);//1000 2000
	printf("%d\n%d", a, b);
	return 0;
}
void update(int *a,int *b)//10,20
{
	int x,y;
	x=*a + *b;//30
	y=*a - *b;//-10
	*a=x;//30
	*b=abs(y);//10
}
