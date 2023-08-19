#include <stdio.h> 

int para; 
int bozuk_para; 

int kalanpara_1;
int kalanpara_2; 
int kalanpara_3; 
int kalanpara_4; 
int kalanpara_5; 
int kalanpara_6; 

int adet_1 = 0; 
int adet_2 = 0; 
int adet_3 = 0; 
int adet_4 = 0; 
int adet_5 = 0; 
int adet_6 = 0; 


void para_ogren(){ 
    printf("Cekmek isteginiz toplam para miktari:"); 
    scanf("%d", &para); 
}
int ikiYuzAdet(){ 
        while (para >= 200){ 
            para -= 200; 
            adet_1++; 
    }
    printf("\n200 TL: %d adet",adet_1);  
    kalanpara_1 = para % 200;  
}
int yuzAdet(){ 
    while (kalanpara_1 >= 100){
        kalanpara_1 -= 100; 
        adet_2++; 
    }
    printf("\n100 TL: %d adet", adet_2); 
    kalanpara_2 = kalanpara_1 %100; 
}
int elliAdet(){ 
    while (kalanpara_2 >= 50){ 
        kalanpara_2 -= 50; 
        adet_3++; 
    }
    printf("\n50 TL: %d adet",adet_3); 
    kalanpara_3 = kalanpara_2 %50; 
}
int yirmiAdet(){ 
    while (kalanpara_3 >= 20){ 
        kalanpara_3 -= 20; 
        adet_4++; 
    }
    printf("\n20 TL: %d adet",adet_4); 
    kalanpara_4 = kalanpara_3 %20; 
}
int onAdet(){ 
    while (kalanpara_4 >= 10){ 
        kalanpara_4 -= 10;
        adet_5++; 
    }
    printf("\n10 TL: %d adet",adet_5); 
    kalanpara_5 = kalanpara_4 %10; 
}
int besAdet(){ 
    while (kalanpara_5 >= 5){ 
        kalanpara_5 -= 5;
        adet_6++; 
    }
    printf("\n5 TL: %d adet",adet_6); 
    kalanpara_6 = kalanpara_5 %5; 
    bozuk_para = kalanpara_6; 
    printf("\nBozuk Para : %d TL",bozuk_para); 
}


int main(){ 
    para_ogren(); 
    adet_1 = ikiYuzAdet();  
    adet_2 = yuzAdet(); 
    adet_3 = elliAdet();
    adet_4 = yirmiAdet(); 
    adet_5 = onAdet(); 
    adet_6 = besAdet(); 
    
}
