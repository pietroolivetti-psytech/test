#ifndef LEARNING_H
#define LEARNING_H

#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct s_stack_node
{
	int		nbr;
	int		index;
	int		push_cost;
	bool	above_median;
	bool	cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

// handle errors
//int	count_words(char *s, char c);
//char *get_next_word(char *s, char c);
char **split(char *s, char c);
// stack initiation

// Nodes initiation

//stack utils

//commands

//algorithms


#endif