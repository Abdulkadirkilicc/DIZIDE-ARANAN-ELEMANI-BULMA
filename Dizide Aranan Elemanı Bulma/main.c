#include <stdio.h>

// Dizide eleman�n olup olmad���n� kontrol etmek i�in lineer arama i�lemi yapar.
// Dizide eleman yoksa -1, varsa eleman�n index'ini d�nd�r�r.
int linear_search(int dizi[], int boyut, int aranan) {
	int i = 0;
    for (i = 0; i < boyut; i++) {
        if (dizi[i] == aranan) {
            return i;
        }
    }
    return -1;
}

int main() {
	int i = 0;
    int boyut, aranan;
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &boyut);
	
    int dizi[boyut];
    for (i = 0; i < boyut; i++) {
        printf("%d. elemani girin: ", i+1);
        scanf("%d", &dizi[i]);
    }

    printf("Aranacak elemani girin: ");
    scanf("%d", &aranan);

    int sonuc = linear_search(dizi, boyut, aranan);

    if (sonuc == -1) {
        printf("Aranilan eleman dizide bulunamadi.");
    } else {
        printf("Aranilan eleman dizinin %d indexinde bulundu.", sonuc+1);
    }

    return 0;
}

