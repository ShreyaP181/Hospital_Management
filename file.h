#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 20
#define MAX_DATE 2
#define ERROR 0
#define SUCCESSFULL 1
#define CONDITION 3

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
	char DOJ[8];
	struct Patient *next;
}Patient;

Patient *start;
Patient *tep;
Doctor *star;
Doctor *tem;

void DisplayPatientList();
void DisplayDoctorList();
int Input_Patient();
int Input_Doctor();
void input_at_first();
void input_at_end();
void input_at_location(int i);
void Sorting_Patient();
int IsAlpha(char str[]);
