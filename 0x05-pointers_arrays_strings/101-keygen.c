#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int PASSWORD_LENGTH = 30;

int main(void)
{
	    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$^&*()_+}{|:?><|~/.,;'][-=]}";
	        int len = sizeof(charset) - 1;
		    char password[PASSWORD_LENGTH + 1];
		        int sum = 0;

			    srand(time(NULL));

			        for (int i = 0; i < PASSWORD_LENGTH; i++) {
					        password[i] = charset[rand() % len];
						        sum += password[i];
							    }

				    password[PASSWORD_LENGTH] = '\0';

				        if (sum % 62 != 0) {
						        password[rand() % PASSWORD_LENGTH] = charset[sum % 62];
							    }

					    printf("%s\n", password);
					        putchar('\n');

						    return 0;
}
