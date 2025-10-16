#include<stdio.h>
struct student
{
	char name[50];
	int age;
};
void display(struct student s1)
{
	printf("\nDisplaying information\n");
	printf("Name: %s",s1.name);
	printf("\nAge: %d",s1.age);
}
int main()
{
	struct student s1;
	printf("Enter name: ");
	scanf("%[^\n]%*c",s1.name);
	printf("Enter age: ");
	scanf("%d",&s1.age);
	display(s1);
	printf("\nthis is aiml 6 students");
}
