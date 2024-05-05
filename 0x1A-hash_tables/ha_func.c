#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#define Max_size 256
#define Array_len 10

typedef struct{
	char name[Max_size];
	int no;
	struct person *next;
}person;

int hash(char *name)
{
	if (name == NULL)
		return(0);
	int index = 0;
	for (int i = 0; i < strlen(name); i++)
		index += name[i];
	index = index % Array_len;
	return(index);
}

bool Inserting (person *Person, person **hash_table)
{
	if (Person == NULL) return false;
	int index = hash(Person -> name);
	if(hash_table[index] != NULL)
	{
		person *tmp = hash_table[index]->next;
		while (tmp != NULL)
			tmp = tmp->next;
		tmp->next = Person;
		return(true);
	}
	hash_table[index] = Person;
	return(true);
}

bool Deleting (person *Person, person **hash_table)
{
	if (Person == NULL) return false;
	int index = hash(Person -> name);
	if(hash_table[index] != NULL)
	{
		hash_table[index] = NULL;
		return(true);
	}
	return(false);
}

int searching (person **hash_table, char *Name)
{
	int index = hash(Name);
	person *Person = hash_table[index];
	if (Person == NULL)
	{
		printf("empty index");
		return(-1);
	}
	else if (strcmp(Person->name, Name) == 0)
	{
		printf("%s found",Name);
		return(index);
	}
	else
	{
		person *tmp = NULL;
		while(Person->next != NULL)
		{
			tmp = Person->next;
			if (strcmp(tmp->name, Name) == 0)
			{
				printf("%s found",Name);
				return(index);
			}
		}
		printf("%s not found", Name);
		return(-1);
	}
}
void print_list(person **hash_table)
{
	for (int i=0; i < strlen(hash_table); i++)
	{
		person *tmp = hash_table[i];
		for(int j = 0; tmp != NULL; i++)
		{
			printf("index:%d.%d ---- name:%s",i,j, tmp->name);
			tmp = tmp->next;
		}
	}
}

int main(void)
{
	person tsega = {.name = "Tsega", .no = 20};
	person Abebe = {.name = "Abebe", .no = 30};
	person Tinsae = {.name = "Tinsae", .no = 22};
	person yared = {.name = "yared", .no = 21};
	person *hash_table[Max_size];
	for (int i = 0; i < Max_size; i++)
		hash_table[i] = NULL;
	Inserting(&tsega, hash_table);
	Inserting(&Abebe, hash_table);
	Inserting(&Tinsae, hash_table);
	Inserting(&yared, hash_table);
	searching(hash_table,tsega.name);
	Deleting(&tsega, hash_table);
	searching(hash_table, tsega.name);
	print_list(hash_table);
	return(0);
}




