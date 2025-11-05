#include "./ui.h"

char* get_table()
{
	char* table = malloc(256);	
	printf("Select your table: \n");
	fgets(table, sizeof(table), stdin);
		
	return table;
}

int show_menu(char* tb)
{
	while(1)
	{
		int opt = 0;

		printf("NOTES APP\n");

		printf("Options: \n");
		printf("1 - Add a note: \n");
		printf("2 - Exit App \n");

		printf("Choose an option\n");
		scanf("%d", &opt);

		while(getchar() != '\n');

		switch(opt)
		{
			case 1:
				add_note(tb);
				system("clear");
				break;
			case 2:
				printf("Exiting...\n");
				return 0;
			default:
				printf("Invalid option\n");
				break;
		}

	}
}
