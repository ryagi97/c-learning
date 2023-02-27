#include <stdio.h>

#include <limits.h>
#include <float.h>

int main()
{	
	printf("Signed\n");
	printf("\tchar  range = %i:%i\n", SCHAR_MIN, SCHAR_MAX);
	printf("\tshort range = %i:%i\n", SHRT_MIN, SHRT_MAX);
	printf("\tint   range = %i:%i\n", INT_MIN, INT_MAX);

	printf("\nUnsigned\n");
        printf("\tchar  range = %i:%i\n", 0, UCHAR_MAX);
        printf("\tshort range = %i:%i\n", 0, USHRT_MAX);
        printf("\tint   range = %i:%u\n", 0, UINT_MAX);

	return 0;
}
