#ifndef DATABASE_H
#define DATABASE_H

#include<sqlite3.h>
#include<stdio.h>
int open_db(char* db_filepath);
int create_table(char* table_name);
void insert_into(char* table_name);
#endif