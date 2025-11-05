#include "./ui.h"

int show_menu()
{
	while(1)
	{
		int opt = 0;
		char * tb = "notes";

		printf("Options: \n");
		printf("1 - Add a note: \n");
		printf("2 - Exit: \n");

		printf("Choose an option\n");
		scanf("%d", &opt);
		while(getchar() != '\n');
		switch(opt)
		{
			case 1:
				add_note(tb);
				break;
			case 2:
				printf("Exiting...");
				return 0;
		}

	}
}
