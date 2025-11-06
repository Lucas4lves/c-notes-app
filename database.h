#ifndef DATABASE_H
#define DATABASE_H

#include<sqlite3.h>
#include<stdio.h>
#include <stdlib.h>
#include "note.h"

int open_db(char* db_filepath);
int create_table(char* table_name);
int insert_into(Note * note);
int find_all();
int print_callback(void * data, int argc, char * argv[], char * azColName[]);
int close_db();
#endif
