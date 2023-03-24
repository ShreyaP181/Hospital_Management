#include "file.h"

void input_at_first()
{
	Patient *new = malloc(sizeof(Patient));
	if(start == NULL)
	{
		Input_Patient();
		new->next = NULL;
		start = new;
		tep = new;
	}
	else
	{
		Input_Patient();
		new->next = start;
		start = new;
		tep = new;
	}
}

void input_at_end()
{
	Patient *new = malloc(sizeof(Patient));
	Patient *end = malloc(sizeof(Patient));
	if(start == NULL)
	{
		Input_Patient();
		new->next = NULL;
		start = new;
		tep = new;
	}
	else
	{
		end = start;
		while(end->next = NULL)
		{
			end = end->next;
		}
		end->next = new;
	}
}

void input_at_location(int i)
{
	Patient *new = malloc(sizeof(Patient));
	new = start;
	int l;
	while(l<=i)
	{
		new = new->next;
		i++;
	}
	Input_Patient();
}
