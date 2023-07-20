#include<stdio.h>
	 divisible(){
	 	int i,j;
	 	
	 	printf("enter a number =>");
	 	scanf("%d",&i);
	 	
	 	if(i%3==0&&i%5==0){
	 		printf("the given number is divisible by both 3&5");
		 }else{
		 	printf("the given number is  not divisible by both 3&5 ");
		 }
	 }


void main (){
	divisible();
}
