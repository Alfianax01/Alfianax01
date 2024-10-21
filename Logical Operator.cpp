#include <stdio.h>

int main (){
    // Materi logical Operator
 int age = 12;
 int height = 160;
    printf("--------------------------------\n");
//   //&&
//   printf("Masukkan Umur:");
//   scanf("%d", &age);
//   printf("Masukkan Tinggi anda:");
//   scanf("%d", &height);
   //Case 1
   if(age >= 12 && height >= 160){
   	printf("Boleh Naik\n");
   }else{
   	printf("Tidak Boleh Naik\n");
   }
 
 //Case 2
  if(age >= 12 && age <= 40){
 	 	printf("Bisa Naik\n");
 }
 else{
   	printf("Tidak Boleh Naik\n");
   }
 //||

   if(age >= 12 || height >= 160){
 	 	printf("Bisa Naik\n");
 }
 else{
   	printf("Tidak Boleh Naik\n");
   }
 
 // ! ->
 // Case 1
     if(!0){
     	printf("OK\n");
	 }                             
    else{
     	printf("NOT OK\n");
	 }             
	 // Case 2
	  if(!(age >= 12) && height >= 160){
   	printf("Boleh Naik\n");
   }else{
   	printf("Tidak Boleh Naik\n");
   }
  
  printf("--------------------------------\n");
  
  int a = 0b00001010;
  int b = 0b00000101;
  
  int result = a & b;
  printf("%08d\n",result); 
   
    result = a| b;
  printf("%08d\n",result); 
   
   int x = 0b00001011;
  int z = 0b00000101;
   result = x ^ z;
  printf("%08d\n",result); 
   
     result = ~x;
  printf("%08d\n",result); 
  
  int L= 5;
  result = 5 << 2;
  printf("Decimal: %d\n",result);
  
  result = result >> 2;
  printf("Decimal: %d",result);
  
//   printf("----------------------");
return 0;
}
