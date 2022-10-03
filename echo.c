#include <stdio.h>
#include <string.h>

int main(int argc, char ** argv)
{
	if (argc < 1)
	{
		printf("Refer to '%s -h' or '%s --help' for help.\n", argv[0], argv[0]);
	}
	if (argc > 1)
	{
		if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
		{
			printf("%s, don't get this confused with GNU's. It does very similar stuff.\n  USAGE: %s <characters>\n", argv[1], argv[1]);
			return 0;
		}

		if (argc > 2)
		{
			for ()
		}
	}

	return 0;
}
