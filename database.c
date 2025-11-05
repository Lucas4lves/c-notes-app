#include"./database.h"

sqlite3 * db = NULL;
int id_store = 0;

int open_db(char* db_filepath)
{
    int res = sqlite3_open(db_filepath, &db);

    if(res != SQLITE_OK)
    {
        printf("Error opening database: %s\n", sqlite3_errmsg(db));
        return -1;
    }

    return res;
}

int create_table(char* table_name)
{
    char* err_msg = 0;
    char sql[256];

    snprintf(sql, sizeof(sql),
             "CREATE TABLE IF NOT EXISTS %s("
             "id INTEGER PRIMARY KEY AUTOINCREMENT, "
             "note TEXT NOT NULL);",
             table_name);

    int res = sqlite3_exec(db, sql, 0, 0, &err_msg);

    if(res != SQLITE_OK )
    {
        printf("SQL error: %s\n", err_msg);
        sqlite3_free(err_msg);
        return -1;
    }

    return res;
}

int insert_into(char* table_name, char* note)
{
	char* err_msg = 0;
	char sql[256];

	snprintf(sql, sizeof(sql), 
			"INSERT INTO %s"
			"(id, note) VALUES("
            "NULL,'%s'"
            ");",
            table_name, note);
            
    int res = sqlite3_exec(db, sql, 0, 0, &err_msg);

    if(res != SQLITE_OK )
    {
        printf("SQL error: %s\n", err_msg);
        sqlite3_free(err_msg);
        return -1;
    }

    return res;
}
