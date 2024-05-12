#include<stdio.h>
struct employee
{
	char code[10];
	char name[20];
	int salary;
	char dept[25];
	char city[15];
};
int main()
{
	struct employee e[5];
	int n,i;
	n=100;
	for(i=0;i<n;i++)
	{
		gets(e[i].code);
		gets(e[i].name);
		scanf("%d",&e[i].salary); 
		gets(e[i].dept);
		gets(e[i].city);
	}
	for(i=1;i<n;i++)
		{
			if(e[i].salary>20000)
			puts(e[i].name);
		}
	return 0;
}