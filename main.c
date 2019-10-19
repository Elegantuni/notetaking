#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *directory = "${HOME}/.local/share/notetaker";
	const int maxlength = 255;
	char buffer1[maxlength];
	char buffer2[maxlength];
	char *suffix1 = "txt";
	char *filename = argv[1];
	char *editor = "vi";
	int opt;
	
	if(argc < 2)
	{
		printf("%s <file> [-s:suffix] [-d:directory] [-e:editor]\n", argv[0]);

		return 0;
	}
	
	while((opt = getopt(argc, argv, "s:d:e:")) != -1)
	{
		switch(opt)
		{
			case 's':
				suffix1 = optarg;
				break;
			case 'd':
				directory = optarg;
				break;
			case 'e':
				editor = optarg;
				break;
		}
	}

	for(int i = 0; i < maxlength; i++)
	{
		buffer1[i] = '\0';
		buffer2[i] = '\0';
	}

	snprintf(buffer1, maxlength, "mkdir -p %s", directory);

	system(buffer1);

	snprintf(buffer2, maxlength, "%s %s/%s.%s", editor, directory, filename, suffix1);

	system(buffer2);

	return 0;
}

