#include <stdio.h>
#include <windows.h>
int main (){
	char nama [10][100]={"Farel", "Keyko","Tomi","Calvin","Albert","Asta","raya","nana"};
	
	int angka = 0;
	system("color 2");
	for(int i = 0; i < 8; i--){
	printf("%d.%s\n", angka + 1,nama[i]);
		angka++;
	}
	
	return 0;
}
	
