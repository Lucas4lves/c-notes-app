#include <stdio.h>
#include"./database.h"

int main()
{
    int rc = open_db("./notes.db");
    if(rc != SQLITE_OK)
    {
        return -1;
    }

    create_table("tables");
    return 0;
}