#include "./ui.h"

int show_menu()
{
	while(1)
	{
		int opt = 0;
		system("clear");
		printf("____________\n");
		printf("  NOTES APP \n");
		printf("------------\n");

		printf("Options: \n");
		printf("1 - Add a note: \n");
		printf("2 - List all Notes: \n");
		printf("3 - Delete a Note: \n");
		printf("4 - Exit App \n");

		printf("Choose an option\n");
		scanf("%d", &opt);

		while(getchar() != '\n');

		switch(opt)
		{
			case 1:
				system("clear");
				add_note();
				printf("\nNote successfully add, press any key to return...");
				getchar();
				system("clear");
				break;
			case 2:
				system("clear");
				list_all_notes();
				printf("\nPress any key to return...");
				getchar();
				system("clear");
				break;
			case 3:
				system("clear");
				delete_note();
				printf("\nPress any key to return...");
				getchar();
				system("clear");
				break;
			case 4:
				printf("Exiting...\n");
				return 0;
			default:
				printf("Invalid option\n");
				break;
		}

	}
}
