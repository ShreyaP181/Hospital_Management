#include"file.h"

int IsAlpha(char str[])
{
	int StrLen;
	int Len = strlen(str);
	for(StrLen = 0;StrLen < Len ; StrLen++)
	{
		if(!IsAlpha(str[StrLen]))
		{
			printf("WRONG INPUT");
			return ERROR;
		}
	}
	return SUCCESSFULL;
}
