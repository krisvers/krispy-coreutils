#include <stdio.h>
#include <string.h>

int main(int argc, char ** argv)
{
	if (argc < 2)
	{
		printf("Refer to '%s -h' or '%s --help' for help.\n", argv[0], argv[0]);
	}
	if (argc > 1)
	{
		if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
		{
			printf("%s, similar to GNU's counterpart but simpler.\n  USAGE: %s <characters>\n", argv[0], argv[0]);
			return 0;
		}

		if (argc > 2)
		{
			for (unsigned char i = 1; i < argc; i++)
			{
				printf("%s ", argv[i]);
			}
			printf("\n");

			return 0;
		}

		printf("%s\n", argv[1]);

		return 0;
	}

	return 0;
}
