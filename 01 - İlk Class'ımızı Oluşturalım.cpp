#include <iostream>

using namespace std;

class Nokta{ 	// Nokta ad�nda bir s�n�f olu�turduk.
	public:		// ilgili s�n�f�n public oldu�unu belirttik. : ile bitti�ine dikkat ediniz.
	int x,y; 	// int tipinde x ve y olu�turduk
};


int main() {
	
	Nokta n;	// Nokta s�n�f�na ait "n" ad�nda bir NESNE olu�turduk.
	n.x=5;		// n.x diyerek "n" NESNES�N�N "x" eleman�na de�er verdik.
	n.y=10;		// n.y diyerek "n" NESNES�N�N "y" eleman�na de�er verdik.
	
	cout << n.x << "," << n.y << endl;	// "n" Nesnesinin x ve y elemanlar�n� ekrana yazd�zd�k.
	
	return 0;
}
