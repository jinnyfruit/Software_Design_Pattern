/*
	file name: open the file using write
	detail: File I/O
	made_by: jinnyfruit
*/
#include <stdio.h>
int main()
{
	int i;
	FILE* myFile; //file pointer
	double price[2] = { 139.25,19.03 };
	char description[][20] = { "glove","CD" };

	myFile = fopen("price.dat", "w");	//stream type -> write (if file doesn't exist, make a new file)
	if (myFile == NULL)
		printf("\nFIle Could Not Be Opened");
	else
	{
		for (i = 0; i < 2; i++)
			fprintf(myFile, "%-9s %6.2f\n", description[i], price[i]);
		fclose(myFile);
	}

	return 0;
}