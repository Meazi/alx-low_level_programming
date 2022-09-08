#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longType;
	long long int llType;
	float floatType;

printf("Size of a char:%lu byte(s)\n",(unsigned long) sizeof(charType));
printf("Size of an int:%lu byte(s)\n",(unsigned long) sizeof(intType));
printf("Size of long int:%lu byte(s)\n",(unsigned long) sizeof(longType));
printf("Size of long int:%lu byte(s)\n",(unsigned long) sizeof(longType));
printf("Size of long float: %lu byte(s)\n",(unsigned long) sizeof(floatType));
return (0);
}
