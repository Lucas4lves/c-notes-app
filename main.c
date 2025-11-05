#include <stdio.h>
#include"./database.h"

int main()
{
    int rc = open_db("./notes.db");
    if(rc != SQLITE_OK)
    {
        return -1;
    }

    create_table("notes");
    insert_into("notes", "This is a sample note");
    return 0;
}
