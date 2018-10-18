#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{	
	FILE *fp;
	char str_in[100], tmp_str[100], t[100], *freq_str;
	double freq = 0.0;
	unsigned int state;
	unsigned int h0, h1;
	unsigned int d0, d1;

	fp = fopen("test01.txt","rb");
	if (fp != NULL) {
#if 0
		while (fscanf(fp,"%s", str_in) !=EOF)
		{
			printf("%s", str_in);
		}
#endif
		while (fgets(str_in, 100, fp)) {
			fgets(str_in, 100, fp);
			strcpy(tmp_str, str_in);
			freq_str = strtok(tmp_str, " "); 
			freq = atof(freq_str);
			// printf("%f %s\n", freq, freq_str);
/*
			if (freq >= 61)
				printf("%s\n", str_in);
			else if (freq <= 60)
*/
				printf("%f\n", freq);
/*
			printf("%s %s\n", freq_str, str_in);
			sprintf(tmp_str, "%f %s", freq, t); 
			// printf("%f --> %s\n", freq, str_in);
			printf("%f --> %s\n",  freq, str_in);
*/
		}
	}
	else  {
		printf("Read error!\n");
		return -1;
	}

	fclose(fp);

	return 0;
}
