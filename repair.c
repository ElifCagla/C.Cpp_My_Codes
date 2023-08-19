#include <stdio.h> 

float masraf; 
char tip; 

void tip_ogren(){ 
    printf("\nOtomobil : 1 \nKamyon : 2 \nMotosiklet : 3 \nBakýmýný yaptýrmak istediginiz aracýn rakamýný yazýnýz :"); 
    scanf("%s", &tip); 
}

float tipe_masraf_hesapla(char tip[]){ 
    if(strcmp(tip,"1")==0){ 
        masraf = 250.00;
        return masraf; 
    }
    else if(strcmp(tip,"2")==0){ 
        masraf = 400.00;
        return masraf; 
    }
    else if(strcmp(tip,"3")==0){ 
        masraf = 100.00; 
        return masraf; 
    }
    else{ 
        return 0.0; 
    }
}

void tipe_gore_bakim_yap(){ 
    if(strcmp(&tip,"1")==0){ 
        printf("\nOtomobilinizin benzin filtresi, motor yagi, yag filtresi, cam suyu, antifrizi degisti\n"); 
    }
    else if(strcmp(&tip,"2")==0){ 
        printf("\nKamyonunuzun makaslari, mazot filtresi, hidrolik yagi, kompresor contasi, mazot filtresi degisti\n");
    }
    else if(strcmp(&tip,"3")==0){ 
        printf("\nMotosikletinizin fren balatalari, benzin filtresi, zincir yagi ve zinciri degisti, jant akoru yapildi\n");
    }
}
int main(){ 
    while(1){ 
        tip_ogren(); 
        if(tip == '.'){ 
            break; 
        }
        masraf= tipe_masraf_hesapla(&tip);
        printf("%s Aracinin Masrafi : %.2f TL", &tip, masraf); 
        tipe_gore_bakim_yap(&tip);
    }   
    
    return 0; 
        
}
