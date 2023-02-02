
// Class'lara davran�� ekleyelim yani METOT eklemeyi g�relim

#include <iostream>

using namespace std;

class Nokta{
	public:
	int x,y;
	void degerAta(int _x, int _y){  // degerAta ad�nda bir fonksiyon yapt�k ve arg�man olarak ald���m�z de�erleri
                                    // x ve y 'ye e�itledik.
		x = _x;
		y = _y;
	}
	void ekranaYaz(){   // Ekrana yazd�rma fonksiyonu �rettik.
	    cout << x << "," << y << endl;
	}
	bool baslangitaMi(){    // x ve y de�erleri 0 ise koordinat sistemine g�re de�erleri ba�lang�� noktas�ndad�r.
        if (x==0 && y==0)
            return true;
        else
            return false;
		
		/* NOT:
		
		bool baslangictaMi(){
			return x==0 && y==0;
		}
		
		�eklinde yazarak da ayn� i�lemi asl�nda ger�ekletirebiliriz.
		*/
	}

};


int main() {

	Nokta n1;           // n1 ad�ndaki ilk Nesnemiz.
	Nokta n2;           // n2 ad�nda yeni bir NESNE �rettik.
	n1.degerAta(2,7);   // Fonksiyonu �a��rd�k ve de�er atamas� ger�ekle�tirdik.
	n1.ekranaYaz();     // ekranaYaz fonksiyonunu �a��rd�k ve kulland�k.

	n2.degerAta(0,0);
	n2.ekranaYaz();

	// Ba�lang�� noktas� kontrolleri
	if (n1.baslangitaMi())
        cout << "n1 baslangic notkasinda" << endl;


	if (n2.baslangitaMi())
        cout << "n2 baslangic notkasinda" << endl;


	return 0;
}
