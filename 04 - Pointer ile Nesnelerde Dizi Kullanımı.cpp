
// Class'lara davran�� ekleyelim yani METOT eklemeyi g�relim
// Pointer'lar ile Nesne Olu�turma

#include <iostream>

using namespace std;

class Nokta{
	public:
	int x,y;
	void degerAta(int _x, int _y){
		x = _x;
		y = _y;
	}
	void ekranaYaz(){
	    cout << x << "," << y << endl;
	}
	bool baslangitaMi(){
        if (x==0 && y==0)
            return true;
        else
            return false;
    };
};


int main() {

	Nokta n1;
	Nokta n2;

	Nokta* n3;  // Pointer ile n3 nesnesi olu�turduk.
	Nokta* n4;  // Pointer ile n4 nesnesi olu�turduk.

	Nokta dizi[10];         // dizi ad�nda 10 elemanl� bir nesne Dizisi olu�turduk.
	Nokta* pDizi;           //pDizi ad�nda pointer bir nesne dizisi olu�turduk.
	pDizi = new Nokta[10];  // new operat�r� ile bellekten dizi i�in yer ald�k ve 10 elemanl� oldu�unu belirttik.

// For ile De�er Atamas� Yapal�m
	for (int i=0;i<10;i++){ // 0'dan 10'a kadar 1'er 1'er art�� g�steren bir for d�ng�s� kurduk.
        dizi[i].degerAta(i,i+2);
        (pDizi + sizeof(Nokta) * i)->degerAta(i+5,i+10);
	}

// For ile ekrana yazd�ral�m
		for (int i=0;i<10;i++){
        dizi[i].ekranaYaz();
        (pDizi + sizeof(Nokta) * i)->ekranaYaz();
        cout << endl;
	}

	/* sizeof operat�r�
        sizeof(Nokta) ifadesi ile Nokta data tipinin Byte t�r�nden boyutunu hesaplatt�k.
        ��nk� yukar�da bir pointer kullan�yoruz. Dolay�s� ile pointer bir de�eri, direkt olarak
        i de�i�keni ile toplayamay�z, bir alan(birim) ilerlememiz gerekmektedir.
        Bu sebeple sizeof operat�r�n� kulland�k.
        Yani:
            (pDizi + sizeof(Nokta) * i)
        ifadesi ile pDizi'in 0'�nc� adresine bellekte kaplad��� alan kadar (* i ile katlar� kadar)
        ilerlemiz gerekti�ini belirttik.
        2 ile �arp�ld���nda asl�nda 2 birim ileri gitmi� olduk. Yani 2. indis'e ula�t�k.
    */

	n3 = &n2;
    n4 = new Nokta(); // new operat�r� ile bellekten yeni bir Nokta alan� ald�m.

	n1.degerAta(2,7);
	n1.ekranaYaz();

	n2.degerAta(5,0);
	n2.ekranaYaz();

	// Ba�lang�� noktas� kontrolleri
	if (n1.baslangitaMi())
        cout << "n1 baslangic notkasinda" << endl;


	if (n2.baslangitaMi())
        cout << "n2 baslangic notkasinda" << endl;

    cout << "n3 pointerlari ile yazilan degerler" << endl;

    // Pointer ile �retilen nesneleri i�aret etmek i�in "." ifadesi yerine "->" ifadesi kullan�l�r.
    n3->ekranaYaz();
    n4->degerAta(100,200);
    n4->ekranaYaz();

	return 0;
}
