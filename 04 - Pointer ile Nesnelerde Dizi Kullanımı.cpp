
// Class'lara davranýþ ekleyelim yani METOT eklemeyi görelim
// Pointer'lar ile Nesne Oluþturma

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

	Nokta* n3;  // Pointer ile n3 nesnesi oluþturduk.
	Nokta* n4;  // Pointer ile n4 nesnesi oluþturduk.

	Nokta dizi[10];         // dizi adýnda 10 elemanlý bir nesne Dizisi oluþturduk.
	Nokta* pDizi;           //pDizi adýnda pointer bir nesne dizisi oluþturduk.
	pDizi = new Nokta[10];  // new operatörü ile bellekten dizi için yer aldýk ve 10 elemanlý olduðunu belirttik.

// For ile Deðer Atamasý Yapalým
	for (int i=0;i<10;i++){ // 0'dan 10'a kadar 1'er 1'er artýþ gösteren bir for döngüsü kurduk.
        dizi[i].degerAta(i,i+2);
        (pDizi + sizeof(Nokta) * i)->degerAta(i+5,i+10);
	}

// For ile ekrana yazdýralým
		for (int i=0;i<10;i++){
        dizi[i].ekranaYaz();
        (pDizi + sizeof(Nokta) * i)->ekranaYaz();
        cout << endl;
	}

	/* sizeof operatörü
        sizeof(Nokta) ifadesi ile Nokta data tipinin Byte türünden boyutunu hesaplattýk.
        Çünkü yukarýda bir pointer kullanýyoruz. Dolayýsý ile pointer bir deðeri, direkt olarak
        i deðiþkeni ile toplayamayýz, bir alan(birim) ilerlememiz gerekmektedir.
        Bu sebeple sizeof operatörünü kullandýk.
        Yani:
            (pDizi + sizeof(Nokta) * i)
        ifadesi ile pDizi'in 0'ýncý adresine bellekte kapladýðý alan kadar (* i ile katlarý kadar)
        ilerlemiz gerektiðini belirttik.
        2 ile çarpýldýðýnda aslýnda 2 birim ileri gitmiþ olduk. Yani 2. indis'e ulaþtýk.
    */

	n3 = &n2;
    n4 = new Nokta(); // new operatörü ile bellekten yeni bir Nokta alaný aldým.

	n1.degerAta(2,7);
	n1.ekranaYaz();

	n2.degerAta(5,0);
	n2.ekranaYaz();

	// Baþlangýç noktasý kontrolleri
	if (n1.baslangitaMi())
        cout << "n1 baslangic notkasinda" << endl;


	if (n2.baslangitaMi())
        cout << "n2 baslangic notkasinda" << endl;

    cout << "n3 pointerlari ile yazilan degerler" << endl;

    // Pointer ile üretilen nesneleri iþaret etmek için "." ifadesi yerine "->" ifadesi kullanýlýr.
    n3->ekranaYaz();
    n4->degerAta(100,200);
    n4->ekranaYaz();

	return 0;
}
