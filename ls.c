#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>

int main(int argc, char ** argv)
{
	unsigned char all = 0;

	if (argc == 1)
	{
		char cur_dir[1024];
		getcwd(cur_dir, sizeof cur_dir);

		DIR *dir = opendir(cur_dir);

		struct dirent *file;

		while (file = readdir(dir))
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
		}
		printf("\n");
		
		return 0;
	}

	if (argc >= 2)
	{
		if (strcmp(argv[1], "-a") == 0 || strcmp(argv[1], "--all"))
		{
			
		} else if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
			printf("%s, similar to GNU's.\n  USAGE: %s [options] <directory>\n", argv[0], argv[0]);
			return 0;
		}
	}

	return 0;
}
