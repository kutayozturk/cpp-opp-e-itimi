
// Nesneleri Pointer Dizisi Olarak Kullanma
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

	Nokta dizi[10];         // dizi adında 10 elemanlı bir nesne Dizisi oluşturduk.
	Nokta* pDizi;           //pDizi adında pointer bir nesne dizisi oluşturduk.
	pDizi = new Nokta[10];  // new operatörü ile bellekten dizi için yer aldık ve 10 elemanlı olduğunu belirttik.

// For ile Değer Ataması Yapalım
	for (int i=0;i<10;i++){ // 0'dan 10'a kadar 1'er 1'er artış gösteren bir for döngüsü kurduk.
        dizi[i].degerAta(i,i+2);
        (pDizi + sizeof(Nokta) * i)->degerAta(i+5,i+10);
	}

// For ile ekrana yazdıralım
		for (int i=0;i<10;i++){
        dizi[i].ekranaYaz();
        (pDizi + sizeof(Nokta) * i)->ekranaYaz();
        cout << endl;
	}

	/* sizeof operatörü
        sizeof(Nokta) ifadesi ile Nokta data tipinin Byte türünden boyutunu hesaplattık.
        Çünkü yukarıda bir pointer kullanıyoruz. Dolayısı ile pointer bir değeri, direkt olarak
        i değişkeni ile toplayamayız, bir alan(birim) ilerlememiz gerekmektedir.
        Bu sebeple sizeof operatörünü kullandık.
        Yani:
            (pDizi + sizeof(Nokta) * i)
        ifadesi ile pDizi'in 0'ıncı adresine bellekte kapladığı alan kadar (* i ile katları kadar)
        ilerlemiz gerektiğini belirttik.
        2 ile çarpıldığında aslında 2 birim ileri gitmiş olduk. Yani 2. indis'e ulaştık.
    */

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
