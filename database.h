#ifndef DATABASE_H
#define DATABASE_H

#include<sqlite3.h>
#include<stdio.h>
int open_db(char* db_filepath);
int create_table(char* table_name);
int insert_into(char* table_name, char * note);
int list_all(char* table_name);
int print_callback(void * data, int argc, char * argv[], char * azColName[]);
int close_db();
#endif
