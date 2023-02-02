
// Class'lara davranış ekleyelim yani METOT eklemeyi görelim

#include <iostream>

using namespace std;

class Nokta{
	public:
	int x,y;
	void degerAta(int _x, int _y){  // degerAta adında bir fonksiyon yaptık ve argüman olarak aldığımız değerleri
                                    // x ve y 'ye eşitledik.
		x = _x;
		y = _y;
	}
	void ekranaYaz(){   // Ekrana yazdırma fonksiyonu ürettik.
	    cout << x << "," << y << endl;
	}
	bool baslangitaMi(){    // x ve y değerleri 0 ise koordinat sistemine göre değerleri başlangıç noktasındadır.
        if (x==0 && y==0)
            return true;
        else
            return false;
		
		/* NOT:
		
		bool baslangictaMi(){
			return x==0 && y==0;
		}
		
		şeklinde yazarak da aynı işlemi aslında gerçekletirebiliriz.
		*/
	}

};


int main() {

	Nokta n1;           // n1 adındaki ilk Nesnemiz.
	Nokta n2;           // n2 adında yeni bir NESNE ürettik.
	n1.degerAta(2,7);   // Fonksiyonu çağırdık ve değer ataması gerçekleştirdik.
	n1.ekranaYaz();     // ekranaYaz fonksiyonunu çağırdık ve kullandık.

	n2.degerAta(0,0);
	n2.ekranaYaz();

	// Başlangıç noktası kontrolleri
	if (n1.baslangitaMi())
        cout << "n1 baslangic notkasinda" << endl;


	if (n2.baslangitaMi())
        cout << "n2 baslangic notkasinda" << endl;


	return 0;
}
