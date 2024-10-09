#include<stdio.h>
#include<string.h> // strcmp , strcmpi , strcpy

int main(){
char kata [20];
//strcpy(kata,"halo");

 printf("Masukkan Sebuah kata:");
scanf("%s", kata);
 if(strcmp(kata,"halo")==0){
 printf("User Input kata halo");
} else if(strcmp(kata,"Welcome")==0){
printf("User Input kata welcome");
} else{
	printf("kata tidak valid");
}


return 0;
}
