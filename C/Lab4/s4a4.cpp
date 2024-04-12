#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("shultei, ustai hool ideh uu\nshultei bol-0, shulgui bol-1 ");
	scanf("%d",&n);
	if(n==0) {
			printf("tsaitai-0, tsaigui-1 ");
			scanf("%d",&n);
			if(n==0){
			  		printf("budaatai-0, banshtai-1 ");
			  		scanf("%d",&n);
						if(n==0){
						printf("budaatai tsai");}
						else printf("banshtai tsai");} 
			else {
				printf("yutai shul idmeer baina guriltai-1, puntuuztei-2, goimontoi-3, banshtai-4, mahtai-5, nogootoi-6 ");
				scanf("%d",&n);
				switch(n){
				case 1:{
					printf("lafsha");
				break;}
				case 2:{
					printf("huitsai");
				break;}
				case 3:{
					printf("goimontoi shul");
				break;}
				case 4:{
					printf("banshtai shul");
				break;}
				case 5:{
					printf("har shul");
				break;}
				case 6:{
					printf("nogootoi shul");
				break;}}
				}
	}
	else{printf("mah ni tatsan uu\ntatsan mahtai-0, tataagui mahtai-1 ");
		scanf("%d",&n);
		if(n==0){
				  printf("guriland orooson-0, oroogoogui-1 ");
				  scanf("%d",&n);
				  if(n==0){
				  			printf("yaj bolgoson\nsharsan-0, jignesen-1 ");
							scanf("%d",&n);
							if(n==0){
									printf("yaj sharsan\nhuulgun sharsan-0, shuud sharsan-1 ");
									scanf("%d",&n);
									if(n==0){printf("piroshki");}
									else {printf("huushuur");}
									}
							else {printf("yaj jignesen\nhuulgun jignesen-0, shuud jignesen bol-1 ");
				  				  scanf("%d",&n);
				  				  if(n==0){printf("mantuun buuz");}
				  				  else{printf("buuz");}
								 }
							}
				else { printf("budaatai, undgund orooson-0, mahaa buurunhiilsun-1 ");
				scanf("%d",&n);
				if(n==0) {printf("undugtei pifshteks");}
				else {printf("tefteli");}}
			 	}
		else{
			printf("yutai holison\nguriltai-1, undugtei-2, budaatai-3, nogootoi-4 ");
			scanf("%d",&n);
			switch(n){
			case 1:{ printf("tsuivan");
				break;}
			case 2:{ printf("undugtei huurga");
				break;}
			case 3:{ printf("hoorond ni holih uu tiim-0, ugui-1 ");
					 scanf("%d",&n);
					 if(n==0){ printf("guliash");}
					 else{printf("budaatai huurga");}
					 break;}
			case 4:{ printf("nogootoi huurga");
				break;}	
				}
		}
	}
}
