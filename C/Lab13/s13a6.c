#include<stdio.h>
#include<string.h>

typedef struct Student{
	char fname[20], lname[20], id[10];
	float golch;
}std;

void read(std *s){
	printf("Enter fname:\n");
 	scanf("%s", &s->fname);
 	printf("Enter lname:\n");
 	scanf("%s", &s->lname);
 	printf("Enter id:\n");
 	scanf("%s", &s->id);
 	printf("Enter golch:\n");
 	scanf("%f", &s->golch);
}
void print(std s){
	printf("fname:%s\n", s.fname);
	printf("lname:%s\n", s.lname);
	printf("id:%s\n", s.id);
	printf("golch:%.2f\n", s.golch);
}
void set_fname(std *p, char ner[]);
void set_lname(std *p, char ovog[]);
void set_id(std *p, char id[]);
void set_golch(std *p, float golch);

int main(){
	std bat, t;
	read(&bat);
	print(bat);
	set_fname(&t, "dorj");
	set_lname(&t, "bold");
	set_id(&t, "1324");
	set_golch(&t, 3);
	print(t);
	return 0;
}
void set_fname(std *p, char ner[]){
	strcpy(p->fname, ner);
}
void set_lname(std *p, char ovog[]){
	strcpy(p->lname, ovog);
}
void set_id(std *p, char id[]){
	strcpy(p->id, id);
}
void set_golch(std *p, float golch){
	p->golch=golch;
}

