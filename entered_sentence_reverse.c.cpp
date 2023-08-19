#include <stdio.h> 
#include <string.h> 

char cumle[200];//char tipinde cumle isminde tek boyutlu bir dizi tan�mlay�p bellekte ona 400 bytel�k(200 karakterlik) yer ay�r�yor

int main(){ //ana fonksiyon(program�n ba�lad��� yer
	while(1){
		printf("\n");//alt sat�ra ge�
		printf("Bir cumle giriniz:"); //ekran "Bir cumle giriniz:" yazd�r
		fgets(cumle, sizeof(cumle), stdin); //sizden bir metin(en fazla 200 karakterlik bir dizi) giri�i al
		if(cumle[strlen(cumle) - 1] == '\n'){ //e�er girilen son karakter enter tu�uysa(girilen dizi sonland�r�lm��sa)
			cumle[strlen(cumle) - 1] = '\0'; //son karakteri null karakteri yap
		}
		printf("Girdiginiz cumlenin ters sekli:"); //ekrana "Girdiginiz cumlenin ters sekli:" yazd�r
		for(int i=strlen(cumle)-1; i>=0; i--){ //c�mle dizisinin boyutu kadar yani ki�inin girdi�i dizinin karakter boyutu kadar bir d�ng�ye gir ve en son girilen karakteri referans alarak t�m karaterlerin indisine ula�
			printf("%c",cumle[i]); //cumle karakter dizisindeki i indisinin karakterini (yani girilen dizinin ters �eklini) ekrana yazd�r
		}
		if(cumle[strlen(cumle)-1] == '.'){ //e�er girilen son karakter . ise 
			break; //d�ng�den ��k
		}		
	}
	return 0;//kodun sonland���n� g�sterir
}
