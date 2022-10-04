#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>

char * list_dir(char * str)
{
	char dir[1024];
	if (str[0] == '/')
	{
		
	}
}

int main(int argc, char ** argv)
{
	unsigned char all = 0;

	if (argc == 1)
	{
		char cur_dir[1024];
		getcwd(cur_dir, sizeof cur_dir);

		DIR *dir = opendir(cur_dir);

		struct dirent *file;

		file = readdir(dir);

		while (file)
		{
			char *file_name = file -> d_name;

			if (all)
			{
				if (file_name[0] == '.')
				{
					printf("%s  ", file_name);
				}
			} else {
				if (file_name[0] != '.')
				{
					printf("%s  ", file_name);
				}
			}

			file = readdir(dir);
		}
		printf("\n");
		
		return 0;
	}

	if (argc == 2)
	{
		if (strcmp(argv[1], "-a") == 0 || strcmp(argv[1], "--all"))
		{
			all = 1;
			
		}
		else if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
			printf("%s, similar to GNU's.\n  USAGE: %s [options] <directory>\n", argv[0], argv[0]);
			return 0;
		}

		char extern_dir[1024];
		printf("1%c\n", *argv[strlen]);
		if (*argv[0] != '/')
		{
			printf("2\n");
			getcwd(extern_dir, sizeof extern_dir);
		}

		printf("3\n");
		
		strncat(extern_dir, argv[argc], sizeof argv[argc]);

		printf("4\n");

		printf("%s", extern_dir);
	}

	return 0;
}
