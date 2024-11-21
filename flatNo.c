#include<stdio.h>
#include<stdlib.h>
#define FLOOR 5
#define FACE 4
#define SLNO 3

char* color[FACE]={"RED","GREEN","BLUE","PINK"};
char* grade[FLOOR]={"DEEP","DARK","MEDIUM","MILD","LIGHT"};

char* flatNo(int floor,int face,int slno){
	char s[FACE]={'S','E','W','N'};
	char *flno;
	flno=(char*)malloc(4*sizeof(char));
	sprintf(flno,"%c%c%c\0",s[face],floor+'0',slno+'0');
	return flno;
}
void query(int floor,int face,int slno){
	printf("\nFlat#%s",flatNo(floor,face,slno));
	printf("has %s %s windows",grade[floor],color[face]);
}

int main(){
	int winCol[FLOOR][FACE][SLNO];
	int i,j,k;
	printf("\nEnter floor#[0-%d],face#[0-%d],sl no[0-%d]:",FLOOR-1,FACE-1,SLNO-1);
	scanf("%d,%d,%d",&i,&j,&k);
	query(i,j,k);
	return 0;
}
