#include <stdio.h>
#include <assert.h>

char* My_strcpy(char* e1,const char* e2)
{
	assert(e1 && e2);
	char* ret = e1;
	while (*e2 != '\0')
	{
		*e1 = *e2;
		e2++;
		e1++;
	}
	*e1 = '\0';

	return ret;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };
	My_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}