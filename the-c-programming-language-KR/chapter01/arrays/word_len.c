#include <stdio.h>

#define MAX_LEN 15

// display word lengths as histogram
int main()
{
	int c, i, j, word_len;
	int len_hist[MAX_LEN];

    word_len = 0;

	for (i = 0; i < MAX_LEN; ++i)
		len_hist[i] = 0;

	while ((c = getchar()) != '\n') {
        if ( c != ' ' && c != '\n' && c != '\t' ) {
            ++word_len;
        } else {
            ++len_hist[word_len];
            word_len = 0;
        }
    }

	printf("Word Length \t Occurances\n");
    for (i = 0; i < MAX_LEN; ++i) {
		printf("%d \t\t ", i);
        for (j = 0; j < len_hist[i]; ++j)
            printf("|");
        printf("\n");
    }

}
