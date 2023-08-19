#include <stdio.h>

struct test_kitabi{
	char * ders_adi;
	int sayfa_sayisi;
	int soru_sayisi;
	char * soru_tipi;
	char * zorluk_derecesi;
	float fiyati; 
};

struct konu_anlatim_kitabi{
	char * ders_adi;
	int sayfa_sayisi;
	char * zorluk_derecesi;
	float fiyati;
};

struct tatlilar{
	int sayfa_sayisi;
	char * resimli_mi;
	float fiyat; 
};

void test_kitabi_bas(char *ders_adi, int sayfa_sayisi, int soru_sayisi, char *soru_tipi, char *zorluk_derecesi, float fiyati){
	printf("\nTest Kitabi:");
	printf("\nDers Adi:%s",ders_adi);
	printf("\nSayfa Sayisi:%d",sayfa_sayisi);	
	printf("\nSoru Sayisi:%d",soru_sayisi);
	printf("\nSoru Tipi:%s",soru_tipi);
	printf("\nZorluk Derecesi:%s",zorluk_derecesi);
	printf("\nFiyati:%.2f",fiyati);	
    printf("\n---------------------------\n");	
}
void konu_anlatim_kitabi_bas(char *ders_adi, int sayfa_sayisi, char *zorluk_derecesi, float fiyati){
	printf("\nKonu Anlatim Kitabi:");
	printf("\nDers Adi:%s",ders_adi);
	printf("\nSayfa Sayisi:%d",sayfa_sayisi);
	printf("\nZorluk Derecesi:%s",zorluk_derecesi);		
	printf("\nFiyati:%.2f",fiyati);	
    printf("\n---------------------------\n");					
}
void tatlilar_bas(int sayfa_sayisi, char * resimli_mi, float fiyat ){
	printf("\nTatlilar:");
	printf("\nSayfa Sayisi:%d",sayfa_sayisi);
	printf("\nResimli mi:%s",resimli_mi);
	printf("\nFiyati:%.2f",fiyat);	
}

int main(){
	struct test_kitabi test;
	test.ders_adi = "matematik";
	test.sayfa_sayisi = 250;
	test.soru_sayisi = 1250;
	test.soru_tipi = "Klasik Problem";
	test.zorluk_derecesi = "Zor";
	test.fiyati = 250;
    test_kitabi_bas(test.ders_adi, test.sayfa_sayisi, test.soru_sayisi, test.soru_tipi, test.zorluk_derecesi, test.fiyati);
    
    struct konu_anlatim_kitabi konu;
	konu.ders_adi = "Inkilap Tarihi ve Ataturkculuk";
	konu.sayfa_sayisi = 423;
	konu.zorluk_derecesi = "Orta";
	konu.fiyati = 270;
    konu_anlatim_kitabi_bas(konu.ders_adi, konu.sayfa_sayisi, konu.zorluk_derecesi, konu.fiyati);
	
	struct tatlilar tarif;
	tarif.sayfa_sayisi = 90;
	tarif.resimli_mi = "Evet";
	tarif.fiyat = 120;
    tatlilar_bas( tarif.sayfa_sayisi, tarif.resimli_mi, tarif.fiyat);
	return 0;
}
