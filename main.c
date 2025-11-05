#include <stdio.h>
#include<stdlib.h>
#include"./database.h"


char* prompt_note();

int main()
{
    int rc = open_db("./notes.db");
    if(rc != SQLITE_OK)
    {
        return -1;
    }

    create_table("notes");

	char* new_note = prompt_note();	

    insert_into("notes", new_note);

    list_all("notes");

	
	if(close_db() != SQLITE_OK)
	{
		printf("ERROR: unable to close the database connection\n");
		return -1;
	}

    return 0;
}


char* prompt_note()
{
	char * content = malloc(256);	
	printf("Enter the text for the new note: \n");
	fgets(content, 256, stdin);

	return content;
	
}
