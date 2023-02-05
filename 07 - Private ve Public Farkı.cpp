// private: özel tanımlama

#include <iostream>

using namespace std;

class Nokta{
    private:    // içerisinde tanımlanan x değişkenini private yani özel olarak tanımladık.
    int x;      // Bu sbeple x değişkenine dışarıdan değer atıması yapılamaz. Erişime kapalıdır.
    
    public:
	int y;
    void degerAta(int, int); 

    void ekranaYaz();
    bool baslangitaMi();
};
    
void Nokta::degerAta(int _x, int _y){ 
    x = _x;
    y = _y;
} 
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
    // n1.x=5; x değişkeni private'dır.
    n1.y=7;
	
    // cout << n1.x << endl; x değişkeni private'dır.
    cout << n1.y << endl;

	return 0;
}