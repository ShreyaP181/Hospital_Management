#include"file.h"

Patient *ptr;
void Sorting_Patient()
{
	printf("Sorted data is as followed");
	tep=start;
	int a;
	while(tep->next != NULL)
	{
		ptr = tep->next;
		while(ptr != NULL)
		{
		if(ptr->Ward < tep->Ward)
		{
			a = tep->Ward;
			tep->Ward = ptr->Ward;
			ptr->Ward = a;
		}
		ptr = ptr->next;
		}
		tep = tep->next;
	}
	DisplayPatientList();
}
