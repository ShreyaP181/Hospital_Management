#include "file.h"

int input(){
	int choice,data;
	char temp;
	Patient *new = malloc(sizeof(Patient));
	Patient *append = malloc(sizeof(Patient));
	Doctor *first = malloc(sizeof(Doctor));
	printf("Please enter details: \nEnter 1 for doctor and Enter 2 for patient");
	scanf("%d",&choice);
	switch(choice)
	{
		case 2:
			printf("Enter Patient Name: \n");
			scanf("%c",&temp);
			gets(new->Name);
			printf("Enter Disease: \n");
			scanf("%c",&temp);
			gets(new->Disease);
			printf("Enter Ward num: \n");
			scanf("%d",&new->Ward);
			printf("Enter relevant Doctor Name: \n");
			scanf("%c",&temp);
			gets(new->D.DName);
			printf("Enter Date of joining\n");
			scanf("%s",new->DOJ.Date);
			scanf("%s",new->DOJ.Month);
			scanf("%s",new->DOJ.year);
			new->next = NULL;
			start = new;
			tep = new;
			printf("enter data -1 if you want to exit");
			scanf("%d",&data);
			while(data !=-1)
			{		
			printf("Enter Patient Name: \n");
			scanf("%c",&temp);	
			for(int i=0;i<CONDITION;i++)
			{
				gets(append->Name);
				if(IsAlpha(append->Name) == SUCCESSFULL)
				{
					break;
				}
			        if(IsAlpha(append->Name)==ERROR && i==2)
				{
					return;
				}
			}
			printf("Enter Disease: \n");							scanf("%c",&temp);
			gets(append->Disease);
			printf("Enter Ward num: \n");
			scanf("%d",&append->Ward);
			printf("Enter relevant Doctor Name: \n");
			scanf("%c",&temp);
			gets(append->D.DName);
			printf("Enter Date of joining\n");
			scanf("%s",append->DOJ.Date);
			scanf("%s",append->DOJ.Month);
			scanf("%s",append->DOJ.year);
			append->next =NULL;
			tep->next = new;
			tep = new;
			printf("Enter -1 to end");
			scanf("%d",&data);
			}
			break;
		case 1:
			printf("Enter Dr Name: \n");
			scanf("%c",&temp);
			for(int i=0;i<CONDITION;i++)
			{
				gets(first->DName);
				if(IsAlpha(first->DName) == SUCCESSFULL)
				{
					break;
				}
				if(IsAlpha(first->DName) == ERROR && i==2)
				{
					return;
				}
			}
			printf("Enter Spc: \n");
			scanf("%c",&temp);
			gets(first->Spc);
			first->after = NULL;
			star = first;
			tem = first;
			printf("enter -1 to end");
			scanf("%d",&data);
			while(data != -1)
			{
				printf("Enter Dr Name: \n");
		 		scanf("%c",&temp);
				gets(first->DName);
				printf("Enter Spc: \n");
				scanf("%c",&temp);
				gets(first->Spc);
				first->after = NULL;
				tem->after = first;
				tem = first;
				printf("enter -1 to stop");
				scanf("%d",&data);
			}
			break;
		case 3:
			printf("Exit");
		default:
			printf("No data entry");
	}
	return 0;
}

void main()
{
	input();
	DisplayPatientList();
//	DisplayDoctorList();
}
