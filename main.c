#include <stdio.h>
#include "./database.h"
#include "./ui.h"

int main()
{
    int rc = open_db("./notes.db");
    if(rc != SQLITE_OK)
    {
        return -1;
    }

    create_table("notes");

	show_menu();	
	
	if(close_db() != SQLITE_OK)
	{
		printf("ERROR: unable to close the database connection\n");
		return -1;
	}

    return 0;
}


