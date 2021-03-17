#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINE 100
void copy(char from[], char to[]);

char line[MAXLINE];    
char longest[MAXLINE]; 

int main()
{
	int len;
	int max;

	max = 0;

	while (fgets(line,MAXLINE,stdin) != NULL) {
		len = strlen(line);
		if (len > max) {
			printf("len = %d\n",len);
			max = len;
			copy(line, longest);
		}
		if (max > 0){ 
			printf("line =%s",line);
			printf("longest = %s\n", longest);
		}
	}


	return 0;
}

void copy(char from[], char to[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

