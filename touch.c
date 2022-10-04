#include <stdio.h>
#include <string.h>

int main(int argc, char ** argv)
{
	FILE *fp;
	char c;

	if (argc < 2)
	{
		printf("Check out '%s -h' or '%s --help' for help.\n", argv[0], argv[0]);
		return 0;
	}

	if (argc > 1)
	{
		if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
		{
			printf("%s, similar to GNU's counterpart.\n  USAGE: %s <new_file> <text>", argv[0], argv[0]);
			return 0;
		}

		if (argc == 2)
		{
			fp = fopen(argv[1], "a");
			if (fp == NULL)
			{
				printf("Unable to open %s!\n", argv[1]);
				return -1;
			}

			fprintf(fp, "%c", EOF);

			fclose(fp);

			return 0;
		}

		if (argc > 2)
		{
			fp = fopen(argv[1], "a");
			if (fp == NULL)
			{
				printf("Unable to open %s!\n", argv[1]);
				return -1;
			}

			fprintf(fp, "%s", argv[2]);

			fclose(fp);

			return 0;
		}

	}

	return 0;
}
