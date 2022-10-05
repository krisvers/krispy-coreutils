#include <stdio.h>
#include <string.h>

int main(int argc, char ** argv)
{
	FILE *fone;
	FILE *ftwo;
	char c;

	if (argc < 2)
	{
		printf("Check out '%s -h' or '%s --help' for help\n", argv[0], argv[0]);
		return 0;
	}

	if (argc > 1)
	{
		if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
		{
			printf("%s, similar to GNU's counterpart.\n  USAGE: %s <file_one> <file_two>\n", argv[0], argv[0]);
			return 0;
		}

		printf("Check out '%s -h' or '%s --help' for help\n", argv[0], argv[0]);
		return 0;
	}

	if (argc == 3)
	{
		
	}

	if (argc > 3)
	{
		printf("Check out '%s -h' or '%s --help' for help\n", argv[0], argv[0]);
		return 0;
	}

	return 0;
}
