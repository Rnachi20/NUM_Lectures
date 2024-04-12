#include <stdio.h>
#include <string.h>

struct Student{
	char fname[20], lname [20], id[10];
	float golch;
};

typedef struct Student Student;

void read_students(Student a[], int n){ 
	for(int i=1; i<=n; i++){
		printf("%d. Oyutnii ner: ", i);
		scanf("%s", &a[i].fname);
		printf("   Oyutnii ovog: ", i);
		scanf("%s", &a[i].lname);
		printf("   Oyutnii ID: ", i);
		scanf("%s", &a[i].id);
		printf("   Oyutnii golch: ", i);
		scanf("%f", &a[i].golch);
		printf("\n");
	}	
}

void print_students(Student a[], int n){
	for(int i=1; i<=n; i++){
		printf("%d. Oyutnii ner: %s, oyutnii ovog: %s, oyutnii ID: %s, oyutnii golch: %.1f\n", i, a[i].fname, a[i].lname, a[i].id, a[i].golch);
	}
}

void print(Student st){
	printf("HAILTIIN UR DUN: Oyutnii ner: %s, oyutnii ovog: %s, oyutnii ID: %s, oyutnii golch: %.1f\n", st.fname, st.lname, st.id, st.golch);
}

int search_by_fname(Student a[], int n, char fname[]){
	int i, j, s;
	for(i=1; i<=n; i++){
		s=0;
		for(j=1; j<=strlen(fname); j++){
			if(a[i].fname[j]==fname[j]) 
			s++;
		}
		if(s==strlen(fname)) 
		return i;
	}
	return -1;
}

int search_by_lname(Student a[], int n, char lname[]){
	int i, j, s;
	for(i=1; i<=n; i++){
		s=0;
		for(j=1; j<=strlen(lname); j++){
			if(a[i].lname[j]==lname[j]) 
			s++;
		}
		if(s==strlen(lname)) 
		{
			return i;
		}
	}
	return -1;
}

int search_by_id(Student a[], int n, char id[]){
	int i, j, s;
	for(i=1; i<=n; i++){
		s=0;
		for(j=1; j<=strlen(id); j++){
			if(a[i].id[j]==id[j]) 
			s++;
		}
		if(s==strlen(id)) 
		{
			return i;
		}
	}
	return -1;
}

int search_by_golch(Student a[], int n, float golch){
	int i;
	for(i=1; i<=n; i++){
		if(a[i].golch==golch) 
		return i;
	}
	return -1;
}

void sort_by_golch(Student a[], int n){
	int i, k, cnt;
	Student temp[100];
	while(1){
	cnt=0;
	for(i=1; i<n; i++){
		if(a[i].golch>a[i+1].golch){
				temp[0]= a[i];
				a[i]=a[i+1];
				a[i+1]=temp[0];
			}
			else cnt++;
    }
    if(cnt==n-1)
    break;
    }
	print_students(a, n);
}

main(){
	Student a[100];
	int n, cmd, idx;
	printf("Oyutnii too: ");
	scanf("%d", &n);
	read_students(a, n);
	print_students(a, n);
	char fname[20], lname[20], id[20];
	float golch;
	while(1){
		printf("\n1: Nereer haih,  2: Ovgoor haih,  3: ID-r haih,  4: Golchoor haih,  5: Golchoor erembelex,  6: Hewleh,  7: Garah\n");
		scanf("%d", &cmd);
		if(cmd==1){
			printf("\nHaih ner: ");
			scanf("%s", fname);
			idx = search_by_fname(a, n, fname);
			if(idx==-1)	
				printf("Oyutan oldsongui!\n");
			else 
				print(a[idx]);
		}else if(cmd==2){
			printf("\nHaih ovog: ");
			scanf("%s", lname);
			idx=search_by_lname(a, n, lname);
			if(idx==-1)	
				printf("Oyutan oldsongui!\n");
			else 
				print(a[idx]);
		}else if(cmd==3){
			printf("\nHaih ID: ");
			scanf("%s", id);
			idx=search_by_id(a, n, id);
			if(idx==-1)	
				printf("Oyutan oldsongui!\n");
			else 
				print(a[idx]);
		}else if(cmd==4){
			printf("\nHaih golch: ");
			scanf("%f", &golch);
			idx=search_by_golch(a, n, golch);
			if(idx==-1)	
				printf("Oyutan oldsongui!\n");
			else 
				print(a[idx]);
		}else if(cmd==5){
			sort_by_golch(a, n);
		}else if(cmd==6){
			print_students(a, n);
		}else 
			break;
	}
}
