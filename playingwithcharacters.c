#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 100
int main() 
{

    char s1;
    char s2[100],s3[100];
	scanf("%c",&s1);
	scanf(" %[^\n]s",s2);
	scanf(" %[^\n]s",s3);
	printf("%c\n%s\n%s", s1,s2,s3);
  	return 0;
}


