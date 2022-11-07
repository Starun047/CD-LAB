#include<stdio.h>
#include<string.h>
void valida(char[]);
void main()
{  
char s[5], v[5];
int i=0;
printf("\n Enter any operator");
gets(s);
valida(s);
}
void valida(char s[])
{  
if (strcmp(s,"<=")==0)
printf("less than or equal");
else if (strcmp(s,"<")==0)
printf("less than");
else if (strcmp(s,">")==0)
printf("greater than");
else if (strcmp(s,">=")==0)
printf("greater than or equal");
else if (strcmp(s,"==")==0)
printf("comparision");
else if (strcmp(s,"=")==0)
printf("assignment operation");
else if (strcmp(s,"!=")==0)
printf("not equal to ");
else if (strcmp(s,"!")==0)
printf("Bitwise not");
else if (strcmp(s,"&&")==0)
printf("logical and");
else if (strcmp(s,"&")==0)
printf("Bitwise and");
else if (strcmp(s,"||")==0)
printf("logical or");
else if (strcmp(s,"|")==0)
printf("Bitwise or");
else if (strcmp(s,"++")==0)
printf("increment");
else if (strcmp(s,"--")==0)
printf("decrement");
else if (strcmp(s,"+")==0)
printf("addition");
else if (strcmp(s,"-")==0)
printf("subtraction");
else if (strcmp(s,"**")==0)
printf("exponental");
else if (strcmp(s,"*")==0)
printf("multiplication");
else if (strcmp(s,"/")==0)
printf("divison");
else if (strcmp(s,"//")==0)
printf("integer divison");
else if (strcmp(s,"%")==0)
printf("remainder");
else 
printf("invalid operator");
}
