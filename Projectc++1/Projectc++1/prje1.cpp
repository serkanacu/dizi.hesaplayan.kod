
	

#include <iostream>                 // Serkan ACU  220905015  şube 1 quiz 1


    // Aritmetik ortalama hesaplayan fonksiyon
using namespace std;

    double hesaplaOrtalama(int* dizi, int* elemanSayisi) {
        int toplam = 0;
        for (int i = 0; i < *elemanSayisi; i++) {
            toplam += dizi[i];
        }
        return static_cast<double>(toplam) / *elemanSayisi;
    }

    // Ortalamadan büyük olan elemanları ekrana yazdıran fonksiyon
    void ortalamadanBuyukleriYazdir(int* dizi, int* elemanSayisi, const double& ortalama) {
        cout << "Ortalamadan buyuk olan elemanlar: ";
        for (int i = 0; i < *elemanSayisi; i++) {
            if (dizi[i] > ortalama) {
                cout << dizi[i] << " , ";
            }
        }
        cout << endl;
    }

    int main() {
        int elemanSayisi;
        cout << "Dizinin eleman sayisini girin: ";
        cin >> elemanSayisi;  //dizinin elaman sayısını alıyoruz

        int* dizi = new int[elemanSayisi];

        for (int i = 0; i < elemanSayisi; i++) {
           cout << "Dizinin " << i + 1 << ". elemanini girin: ";
            cin >> dizi[i];   //diziyi oluşturup elemanları girmesinini bekliyoruz
        }

        double ortalama = hesaplaOrtalama(dizi, &elemanSayisi);

        cout << "Ortalama: " << ortalama << endl;  //girilen elemanların ortalamasını heaplayoruz

        ortalamadanBuyukleriYazdir(dizi, &elemanSayisi, ortalama);//hesaplanan ortalamayı ekrana yazdırıyoruz

        delete[] dizi; // Belleği temizle komutu

        return 0;
    }









