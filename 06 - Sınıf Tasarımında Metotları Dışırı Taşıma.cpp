// Nesneleri Pointer Dizisi Olarak Kullanma
#include <iostream>

using namespace std;

class Nokta{
	public:
	int x,y;
    void degerAta(int, int); // DegerAta adında bir fonksiyon Prototipi oluştuduk

    void ekranaYaz();
    bool baslangitaMi();

    // Fonksiyon prootipleri Nokta Class'ının içersinde tanımlanmıştır.

};
    
void Nokta::degerAta(int _x, int _y){ // Nokta::degerAta diyerek, Nokta class'ının içersinden fonksiyon çağrılmıştır.
    x = _x;
    y = _y;
} // ; ile bitmediğine dikkat ediniz.
void Nokta::ekranaYaz(){
    cout << x << "," << y << endl;
}

bool Nokta::baslangitaMi(){
                if (x==0 && y==0)
                    return true;
                else
                    return false;
}

int main() {

	Nokta n1;
	Nokta n2;

	Nokta* n3;  
	Nokta* n4;  

	Nokta dizi[10];        
	Nokta* pDizi;           
	pDizi = new Nokta[10];  

	for (int i=0;i<10;i++){ 
        dizi[i].degerAta(i,i+2);
        (pDizi + sizeof(Nokta) * i)->degerAta(i+5,i+10);
	}

		for (int i=0;i<10;i++){
        dizi[i].ekranaYaz();
        (pDizi + sizeof(Nokta) * i)->ekranaYaz();
        cout << endl;
	}

	
	n3 = &n2;
    n4 = new Nokta(); 

	n1.degerAta(2,7);
	n1.ekranaYaz();

	n2.degerAta(5,0);
	n2.ekranaYaz();


	if (n1.baslangitaMi())
        cout << "n1 baslangic notkasinda" << endl;


	if (n2.baslangitaMi())
        cout << "n2 baslangic notkasinda" << endl;

    cout << "n3 pointerlari ile yazilan degerler" << endl;


    n3->ekranaYaz();
    n4->degerAta(100,200);
    n4->ekranaYaz();

	return 0;
}