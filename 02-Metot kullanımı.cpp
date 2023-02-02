
// Class'lara davranýþ ekleyelim yani METOT eklemeyi görelim

#include <iostream>

using namespace std;

class Nokta{
	public:
	int x,y;
	void degerAta(int _x, int _y){  // degerAta adýnda bir fonksiyon yaptýk ve argüman olarak aldýðýmýz deðerleri
                                    // x ve y 'ye eþitledik.
		x = _x;
		y = _y;
	}
	void ekranaYaz(){   // Ekrana yazdýrma fonksiyonu ürettik.
	    cout << x << "," << y << endl;
	}
	bool baslangitaMi(){    // x ve y deðerleri 0 ise koordinat sistemine göre deðerleri baþlangýç noktasýndadýr.
        if (x==0 && y==0)
            return true;
        else
            return false;
		
		/* NOT:
		
		bool baslangictaMi(){
			return x==0 && y==0;
		}
		
		þeklinde yazarak da ayný iþlemi aslýnda gerçekletirebiliriz.
		*/
	}

};


int main() {

	Nokta n1;           // n1 adýndaki ilk Nesnemiz.
	Nokta n2;           // n2 adýnda yeni bir NESNE ürettik.
	n1.degerAta(2,7);   // Fonksiyonu çaðýrdýk ve deðer atamasý gerçekleþtirdik.
	n1.ekranaYaz();     // ekranaYaz fonksiyonunu çaðýrdýk ve kullandýk.

	n2.degerAta(0,0);
	n2.ekranaYaz();

	// Baþlangýç noktasý kontrolleri
	if (n1.baslangitaMi())
        cout << "n1 baslangic notkasinda" << endl;


	if (n2.baslangitaMi())
        cout << "n2 baslangic notkasinda" << endl;


	return 0;
}
