#include <stdio.h>
#include <windows.h>
int main (){
	char nama [10][100]={"Farel", "Keyko","Tomi","Calvin","Albert","Asta","raya","nana","joseph"};
	printf("Decrement\n");
	 int angka = 5;
	system("color 2");
	for(int i = 8; i >= 4; i--){
	printf("%d.%s\n", angka ,nama[i]);
		angka--;
	}
		
		printf("\nIncrement\n");
		angka = 0;
      	for(int i = 0; i < 4; i++){
	    printf("%d.%s\n", angka +1 ,nama[i]);
	    	angka++;
	}
	return 0;
}
	
