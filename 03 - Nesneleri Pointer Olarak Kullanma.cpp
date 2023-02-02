
// Nesneleri Pointer Olarak Kullanma

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

	Nokta* n3;  // Pointer ile n3 nesnesi oluşturduk.
	Nokta* n4;  // Pointer ile n4 nesnesi oluşturduk.


	n3 = &n2;
    n4 = new Nokta(); // new operatörü ile bellekten yeni bir Nokta alanı aldım.

	n1.degerAta(2,7);
	n1.ekranaYaz();

	n2.degerAta(5,0);
	n2.ekranaYaz();

	// Başlangıç noktası kontrolleri
	if (n1.baslangitaMi())
        cout << "n1 baslangic notkasinda" << endl;


	if (n2.baslangitaMi())
        cout << "n2 baslangic notkasinda" << endl;

    cout << "n3 pointerlari ile yazilan degerler" << endl;

    // Pointer ile üretilen nesneleri işaret etmek için "." ifadesi yerine "->" ifadesi kullanılır.
    n3->ekranaYaz();
    n4->degerAta(100,200);
    n4->ekranaYaz();

	return 0;
}
