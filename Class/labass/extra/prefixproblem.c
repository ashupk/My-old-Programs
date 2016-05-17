/* Name prefix checking
You are given a list of first and last names as input that indicate students in the class. Then given a
prefix string str you have to return the list of students that have the string str as prefix in their first
or last name
Input
N – integer number of persons
N lines with two strings representing first and last name
prefix string to check
Output
K lines with the first and last names of the persons that have prefix string in their first or last name */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Name
{
	char *first;
	char *last;
};

int isSubstring(char *str, char *name)
{
	if(strncmp(name, str, strlen(str)) == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int n;
	int i;
	struct Name *list;
	scanf("%d",&n);
	char *str;
	list = (struct Name*) malloc(sizeof(struct Name)*n);
	for( i=0; i< n; i++)
		scanf("%ms %ms",&list[i].first, &list[i].last);
	scanf("%ms",&str);

	for( i=0; i<n; i++)
	{
		if(isSubstring(str, list[i].first) || isSubstring(str, list[i].last) )
			printf("%s %s\n",list[i].first, list[i].last);
	}
	for( i=0; i<n; i++)
	{
		free(list[i].first);
		free(list[i].last);
	}
	free(list);
	return 0;
}
