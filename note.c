#include "./note.h"
#include "./database.h"
#include "./result.h"

Note * new_note(char * content)
{
    Note * n = (Note *)malloc(sizeof(Note));
    n->id = 0; 
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

int prompt_int()
{
    int n;

    printf("Enter note id:\n");
    scanf("%d", &n);
    while(getchar() != '\n');

    return n;
}

void add_note()
{
	Note * n= prompt_note();
	Result res = insert_into(n);
    if(res.exit_code != 0)
    {
        printf("ERROR: %s", res.error_msg);
    }
	free(n);
}

void list_all_notes()
{
    printf("ID\tNOTE");
    if(find_all() != 0)
    {
        printf("ERROR: failed to list all records\n");
    }
}

int delete_note()
{
    int n = prompt_int();
    if(delete(n) != 0)
    {
        printf("ERROR: failed to delete the record\n");
        return -1;
    }

    printf("Record deleted successfully!");

    return 0;
}