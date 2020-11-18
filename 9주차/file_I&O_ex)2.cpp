#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a, sum = 0;
	FILE* inFile, * outFile;

	inFile = fopen("myinfile.txt", "r");
	if (inFile == NULL) {
		printf("Input file could no be opened.");
		exit(1);
	}
	outFile = fopen("myoutfile.txt", "w");
	if (outFile == NULL) {
		printf("Output file could not be opened");
		exit(1);
	}

	while (fscanf(inFile, "%d", &a) == 1)
		sum += a;
	fprintf(outFile, "The sum is %d\n", sum);

	fclose(inFile);
	fclose(outFile);
}