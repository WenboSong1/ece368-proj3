#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef struct point
{
  int xp;
  int yp;
  int visit;
}point;


int main(int argc, char * * argv)
{
	char c;
	int numpoint;
	int numpath;
	char* str1 = malloc(sizeof(char*));
	char* str2 = malloc(sizeof(char*));
	point* array = malloc(10000*sizeof(Node));
	int* xarray = malloc(10000*sizeof(int));
	int* yarray = malloc(10000*sizeof(int));
	printf("Enter input file (including path): ");
	scanf("%s", filename);
	FILE *fptr = fopen(filename, "r");
	fscanf(fptr, "%s %s\n", str1, str2);
	numpoint = atoi(str1);
	numpath = atoi(str2);
	for(int i = 0; i++; i < numpoint)
	{
		fscanf(fptr, "%s %s\n", str1, str2);
		array[i]->xp = atoi(str1);
		array[i]->yp = atoi(str2);
	}
	for(int z = 0; z++; z < numpath)
	{
		fscanf(fptr, "%s %s\n", str1, str2);
		xarray[i] = atoi(str1);
		yarray[i] = atoi(str2);
	}
	for(int q = 0; q++; q < numpoint)
	{
		printf("%d: ", q);
		for(z = 0; z++, z < numpath)
		{
			if(yarray[i] == q)
			{
				printf("%d ", xarray[i]);
			}
		}
		for(z = 0; z++, z < numpath)
		{
			if(xarray[i] == q)
			{
				printf("%d ", yarray[i]);
			}
		}
		printf("\n");
	}
	return 0;
}