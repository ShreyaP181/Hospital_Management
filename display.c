#include "file.h"

void DisplayPatientList()
{
	Patient *ListOfPatient = malloc(sizeof(Patient));
	ListOfPatient = start;
	printf("Patient Record\n");
	while(ListOfPatient != NULL)
	{
		printf("Patient Name:%s\n",ListOfPatient->Name);
		printf("Patient Dicease=%s\n",ListOfPatient->Disease);
		printf("Ward Num= %d\n",ListOfPatient->Ward);
		printf("Doctor Name=%s\n",ListOfPatient->D.DName);		
		printf("Date of joining= %s-%s-%s\n",ListOfPatient->DOJ.Date,ListOfPatient->DOJ.Month,ListOfPatient->DOJ.year);	
		printf("---------------------------------------------\n");
		ListOfPatient = ListOfPatient->next;
	}
	printf("End of Patient Record\n");
}
	
void DisplayDoctorList()
{
	Doctor *ListOfDoctor = malloc(sizeof(Doctor));
	
	ListOfDoctor = First;
        printf("Doctor Record\n");
 	while(ListOfDoctor != NULL)
	{
		printf("Doctor Name:%s\n",ListOfDoctor->DName);
		printf("Doctor Specialization:%s\n",ListOfDoctor->Spc);
		printf("-------------------------------------------\n");
	}
	printf("End of Doctor Record\n");
	ListOfDoctor= ListOfDoctor->after;
}

