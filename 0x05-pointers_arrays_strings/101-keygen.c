#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int PASSWORD_LENGTH = 30;

int main(void)
{
	    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$^&*()_+}{|:?><|~/.,;'][-=]}";
	        int len = sizeof(charset) - 1;
		    char pass[PASSWORD_LENGTH];
		        int i, sum = 0;

			    srand(time(NULL));

			        for ( i = 0; i < PASSWORD_LENGTH; i++) {
					        pass[i] = charset[rand() % len];
						        sum += pass[i];
							    }

				    pass[PASSWORD_LENGTH] = '\0';

				        if (sum % 62 != 0) {
						        pass[rand() % PASSWORD_LENGTH] = charset[sum % 62];
							    }

					    printf("%s\n", pass);
					        putchar('\n');

						    return 0;
}
