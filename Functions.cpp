#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int charcounter(char* word)
{
	int counter = 0;
	int loopcounter = 0;
	while (word[loopcounter] != '\0')
	{
		loopcounter++;
		counter++;

	}
	return counter;
}





char* strconcat(char* first_string, char* second_string)
{
	int num1st = charcounter(first_string);
	int num2nd = charcounter(second_string);
	char* result = (char*)malloc(num1st + num2nd + 1); //el +1 es perk amb sizeof tenim dos \0, i volem nomes un. El BM.
	for (int i = 0; i <= num1st; i++)
	{
		result[i] = first_string[i];
	}
	for (int i = num1st; i <= num2nd + 1; i++)
	{
		result[i] = second_string[i - num1st];
	}
	 
	return result;

}

