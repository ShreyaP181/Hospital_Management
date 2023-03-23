#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 20
#define MAX_DATE 2
#define ERROR 0
#define SUCCESSFULL 1
#define CONDITION 3

typedef struct Date{
	char Date[MAX_DATE];
	char Month[MAX_DATE];
	char year[MAX_DATE];
}Date;

typedef struct Doctor{
	char DName[MAX];
	char Spc[MAX];
	struct Doctor *after;
}Doctor;

typedef struct Patient{
	char Name[MAX];
	char Disease[MAX];
	int Ward;
	Doctor D;
	Date DOJ;
	struct Patient *next;
}Patient;

Patient *start;
Patient *tep;
Doctor *star;
Doctor *tem;

void DisplayPatientList();
//void DisplayDoctorList();
int IsAlpha(char str[]);
