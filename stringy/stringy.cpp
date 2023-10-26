// stringy.cpp : Defines the entry point for the application.
//

#include "stringy.h"

int count_letters(char* text) 
{
	int count = 0;
	for (size_t i = 0; i < strlen(text); i++)
	{
		if (isalpha(text[i]))
		{
			count++;
		}
	}
	return count;
}

int count_numbers(char* text)
{
	int count = 0;
	for (size_t i = 0; i < strlen(text); i++)
	{
		if (isdigit(text[i]))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi.Auto Hyundai ix35 ma pres 120 konskych sil.";
	printf("Pocet pismen:%d\n",count_letters(text));
	printf("Pocet cisel:%d\n", count_numbers(text));
	return 0;
}
