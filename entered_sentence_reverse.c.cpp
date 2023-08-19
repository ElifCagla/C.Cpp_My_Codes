#include <stdio.h> 
#include <string.h> 

char cumle[200];//char tipinde cumle isminde tek boyutlu bir dizi tanýmlayýp bellekte ona 400 bytelýk(200 karakterlik) yer ayýrýyor

int main(){ //ana fonksiyon(programýn baþladýðý yer
	while(1){
		printf("\n");//alt satýra geç
		printf("Bir cumle giriniz:"); //ekran "Bir cumle giriniz:" yazdýr
		fgets(cumle, sizeof(cumle), stdin); //sizden bir metin(en fazla 200 karakterlik bir dizi) giriþi al
		if(cumle[strlen(cumle) - 1] == '\n'){ //eðer girilen son karakter enter tuþuysa(girilen dizi sonlandýrýlmýþsa)
			cumle[strlen(cumle) - 1] = '\0'; //son karakteri null karakteri yap
		}
		printf("Girdiginiz cumlenin ters sekli:"); //ekrana "Girdiginiz cumlenin ters sekli:" yazdýr
		for(int i=strlen(cumle)-1; i>=0; i--){ //cümle dizisinin boyutu kadar yani kiþinin girdiði dizinin karakter boyutu kadar bir döngüye gir ve en son girilen karakteri referans alarak tüm karaterlerin indisine ulaþ
			printf("%c",cumle[i]); //cumle karakter dizisindeki i indisinin karakterini (yani girilen dizinin ters þeklini) ekrana yazdýr
		}
		if(cumle[strlen(cumle)-1] == '.'){ //eðer girilen son karakter . ise 
			break; //döngüden çýk
		}		
	}
	return 0;//kodun sonlandýðýný gösterir
}
