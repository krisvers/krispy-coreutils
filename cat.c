#include <stdio.h>
#include <string.h>

int main(int argc, char ** argv)
{
	FILE *fp;
	char c = '\n';

	if (argc < 2)
	{
		printf("Check out '%s -h' or '%s --help' for help.\n", argv[0], argv[0]);
		return 0;
	}
	if (argc == 2)
	{
		if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
		{
			printf("%s, similar to GNU's counterpart but simpler.\n  USAGE: %s <file>\n", argv[0], argv[0]);
			return 0;
		}

		fp = fopen(argv[1], "r");
		if (fp == NULL)
		{
			printf("FILE %s couldn't be read from!\n", argv[1]);
			return -1;
		}

		while (c != 255)
		{
			fprintf(stdout, "%c", c);
			c = fgetc(fp);
		}

		fclose(fp);

		return 0;
	}
	if (argc > 2)
	{
		printf("Check out '%s -h' or '%s --help' for help.\n", argv[0], argv[0]);
		return 0;
	}

	return 0;
}
