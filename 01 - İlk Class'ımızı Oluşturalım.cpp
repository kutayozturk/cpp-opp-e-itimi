#include <iostream>

using namespace std;

class Nokta{ 	// Nokta adýnda bir sýnýf oluþturduk.
	public:		// ilgili sýnýfýn public olduðunu belirttik. : ile bittiðine dikkat ediniz.
	int x,y; 	// int tipinde x ve y oluþturduk
};


int main() {
	
	Nokta n;	// Nokta sýnýfýna ait "n" adýnda bir NESNE oluþturduk.
	n.x=5;		// n.x diyerek "n" NESNESÝNÝN "x" elemanýna deðer verdik.
	n.y=10;		// n.y diyerek "n" NESNESÝNÝN "y" elemanýna deðer verdik.
	
	cout << n.x << "," << n.y << endl;	// "n" Nesnesinin x ve y elemanlarýný ekrana yazdýzdýk.
	
	return 0;
}
