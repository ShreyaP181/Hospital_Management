#include "file.h"

int Input_Patient()
{
	int choice,data;
	char temp;
	Patient *new = malloc(sizeof(Patient));
	Patient *append = malloc(sizeof(Patient));
	printf("Enter Patient Name: \n");
	scanf("%c",&temp);
	for(int i=0;i<CONDITION;i++)
	{
			gets(new->Name);
			if(IsAlpha(new->Name) == SUCCESSFULL)
			{
				break;
			}
		        if(IsAlpha(new->Name)==ERROR && i==2)
			{
				return;
			}
	}
	printf("Enter Disease: \n");
	scanf("%c",&temp);
	gets(new->Disease);
	printf("Enter Ward num: \n");
	scanf("%d",&new->Ward);
	printf("Enter relevant Doctor Name: \n");
	scanf("%c",&temp);
	gets(new->D.DName);
	printf("Enter Date of joining\n");
	scanf("%s",new->DOJ);
	new->next= NULL;
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
		scanf("%s",append->DOJ);
		append->next =NULL;
		tep->next = append;
		tep = append;
		printf("Enter -1 to end");
		scanf("%d",&data);
	}
	return 0;
}
int Input_Doctor(){
	int choice,data;
	char temp;
	Doctor *first = malloc(sizeof(Doctor));
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
	tem->after = first;
	tem = first;
	printf("enter -1 to stop");
	scanf("%d",&data);
}
	return 0;
}

void main()
{
	int choice;
	while(1){
		printf("enter menu option: \n");
		printf("Enter 1 for Patient Entry\n2 for Doctor Entry\n3 for display patient entry\n4 for Display Doctor Entry\n5 for exit\n6 for sorting");
		scanf("%d",&choice);
		switch(choice){
			case 1:	
				Input_Patient();
				break;
			case 2:
				Input_Doctor();
				break;
			case 3:
				DisplayPatientList();
				break;	
			case 4:
				DisplayDoctorList();
				break;
			case 5:
				printf("exiting program\n");
				exit(0);
			case 6:
				Sorting_Patient();
				break;
			default:
				printf("Invalid choice\n");
				break;		

		}		
}
}
