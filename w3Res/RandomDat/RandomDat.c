#include<stdio.h>
#include<stdlib.h>
int main()
{
		const char filepath[] = "f:/code/problems/w3res/RandomDat/Ran.dat";
		int i;
		FILE *file;
		file = fopen(filepath, "a");
		
		if(file == NULL)
		{
				printf("YOU STUPID NIG-");
				return 0;
		}
		else 
		{
				printf("File has been opened successfully!");
				fprintf(file, "50\n");
				
				for(i=1; i<=50; i++)
				{
						fprintf(file,"%.1f\n",(float)rand()/RAND_MAX -0.5);
				}				
				fclose(file); 		
		}

}
