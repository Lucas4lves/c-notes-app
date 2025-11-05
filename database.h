#ifndef DATABASE_H
#define DATABASE_H

#include<sqlite3.h>
#include<stdio.h>
#include <stdlib.h>

int open_db(char* db_filepath);
int create_table(char* table_name);
char* prompt_note(void);
void add_note(char* table_name);
int insert_into(char* table_name, char * note);
int list_all();
int print_callback(void * data, int argc, char * argv[], char * azColName[]);
int close_db();
#endif
