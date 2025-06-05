#include "learning.h"
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		//printf("Total words: %d\n", count_words(av[1], ' '));
		//printf("%s \n", get_next_word(av[1], ' '));
		char **sent;
		sent = split(av[1], ' ');
		int i = 0;
		while(sent[i])
			printf("%s", sent[i]);
	}
	return 0;
}