#include<stdio.h>
#include<string.h>
struct subject{
	char subname[20][20];
	float submarks[20];
};
struct students{
	char studname[20];
	struct subject sub;
	float total;
};
main(){
	int numstud,numsub;
int i,j;
char tempo[20];
printf("enter number of subject: ");
scanf("%d",&numsub);
printf("enter number of students: ");
scanf("%d",&numstud);
struct students stud[numstud];
for(i=0;i<numsub;i++){
	printf("enter subject %d name: ",i+1);
	fflush(stdin);
	gets(tempo);
	for(j=0;j<numstud;j++){
		strcpy(stud[j].sub.subname[i],tempo);
	}
}
for(i=0;i<numstud;i++){
	printf("enter student %d name: ",i+1);
	fflush(stdin);
	gets(stud[i].studname);
	stud[i].total=0;
	for(j=0;j<numsub;j++){
		printf("enter %s %s marks: ",stud[i].studname,stud[i].sub.subname[j]);
		scanf("%f",&stud[i].sub.submarks[j]);
		stud[i].total+=stud[i].sub.submarks[j];
	}
}
for(i=0;i<numstud;i++){
	printf("%s\n",stud[i].studname);
	for(j=0;j<numsub;j++){
		printf("%s %s marks = %.3f\n",stud[i].studname,stud[i].sub.subname[j],stud[i].sub.submarks[j]);
	}
	printf("%s total marks = %.3f\n",stud[i].studname,stud[i].total);
}
	
}



