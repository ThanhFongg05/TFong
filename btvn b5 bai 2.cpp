#include <stdio.h>
#include <stdlib.h>
const unsigned long long MAXCODE = 9999999999;
unsigned long long scanCode()
{
		printf("ISBN Validator");
		printf("============");
		long code;
		printf("ISBN (0 to quit): ");
		do {
		scanf("%ld", &code);
		if (code > MAXCODE ) printf("Only accept a number less or equal exactly 10 digits!!!\n");
		} 
		while (code > MAXCODE);
		return code;
        }
		void validISBN(long ISBN)
		{
		int * Q, * C;
		Q =(int *) calloc(11,sizeof(int));
		C =(int *) calloc(10,sizeof(int));
		int i, Total = 0;
		for (i = 10; i >= 1; i--)
		{
				Q[i] = ISBN % 10;
				ISBN /= 10; 
		}
		for (i = 1; i < 10; i++)
		{
				C[i] = Q[i] * (11 - i);
				Total += C[i];
		}
		Total += Q[10];
		if (Total % 11 ) printf("\nThis is not a valid ISBN.\n\n");
		else printf("\nThis is a valid ISBN.\n\n");
		free(Q);
		free(C);
		}
		main()
		{
				unsigned long long ISBN;
				do {
						ISBN = scanCode();
						if (ISBN == 0) printf("\nHave a Nice Day!\n");
								else validISBN(ISBN);
						} while (ISBN != 0);
}
