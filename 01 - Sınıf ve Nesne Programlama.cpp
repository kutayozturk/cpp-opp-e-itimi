// Sınıf ve Nesne Programlama

#include <iostream>

using namespace std;

class Nokta{ 	// Nokta adında bir sınıf oluşturduk.
	public:		// ilgili sınıfın public olduğunu belirttik. : ile bittiğine dikkat ediniz.
	int x,y; 	// int tipinde x ve y oluşturduk
};


int main() {
	
	Nokta n;	// Nokta sınıfına ait "n" adında bir NESNE oluşturduk.
	n.x=5;		// n.x diyerek "n" NESNESİNİN "x" elemanına değer verdik.
	n.y=10;		// n.y diyerek "n" NESNESİNİN "y" elemanına değer verdik.
	
	cout << n.x << "," << n.y << endl;	// "n" Nesnesinin x ve y elemanlarını ekrana yazdızdık.
	
	return 0;
}
