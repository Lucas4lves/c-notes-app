#include "./note.h"
#include "./database.h"

Note * new_note(char * content)
{
    Note * n = (Note *)malloc(sizeof(Note));
    n->id = 0; // id will be set when inserting into the database
    n->note = content;
    return n;
}

Note * prompt_note()
{
	char * content = malloc(256);	
	printf("Enter the text for the new note: \n");
	fgets(content, 256, stdin);

    Note * n = new_note(content);

	return n;
}

void add_note()
{
	Note * n= prompt_note();
	insert_into(n);
	free(n);
}