//Zetech garading system//
#include<stdio.h>
int main () {
	int physics , biology , chemistry , average;
	
	printf("Enter the physics , biology , chemistry");
	scanf("%d%d%d" , &physics, &biology, &chemistry);
	
	average = (physics+biology+chemistry)/3;
	
	if(average >=70){
		printf("\n Grade A");
	}
	else if(average >=60){
		printf("\n Grade B");
	}
	else if("average >=50"){
		printf("\n Grade C");
	}
	else if(average >=40){
		printf("\n Grade D");
	}
	else {
		printf("\n Grade E");
	}
	return 0;
}
