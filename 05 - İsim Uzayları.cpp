// isim uzayları (namespace)

#include <iostream>

using namespace std; // std: standart isim uzayı

/*
        Programlama yaparken değişkenler kullanıyoruz.
        Global ve Yerel değişkenler olmak üzere
        Global değişkenlere programımızın herhangi bir yerinden erişebilirken
        Yerel değişkenlere sadece tanımlı olduğu bloktan erişebiliyorduk.
        Burada işte bu bloğa artık SCOPE adı verilecektir.

---------------------------------------------------------------------------------------------
       İSİM UZAYI KONUSU

       Fonksiyon oluşturmadan bir scope yaratmak istersek buna isim uzayı denir.
       İsim uzayları ile değişkenler tanımlandığı gibi, fonksiyonlar da tanımlanabilir.

       İsim uzayları birden fazla programcının ortak bir projede çalışırken, tanımlı değişken adları
       veya fonksiyonların isim aynılığı nedeniyle programın hata vermesinin önüne geçmek için de oldukça
       kullanışlıdır.
       bir örnek ile ne demek istediğimizi açıklayalım.

---------------------------------------------------------------------------------------------

*/

namespace programci1{
    int x = 25;
    void Bir(){ // Bir adında void fonksiyonu
    int x = 10;
    cout << x <<endl;
    }
}

namespace programci2{
    int x = 25;
    void Bir(){ // Bir adında void fonksiyonu
    int x = 10;
    cout << x <<endl;
    }
}


int main() {
    int x = 10;
    cout << x << endl;
    /*
        Yukarıdaki örnekte main içerisine tanımlanan x iafesi ekrana yazdırılır.
        Yukarıdaki programcıların oluşturduğu "x" değişkeni ile herhangi bir çakışma meydana gelmemiştir.
        Ancak int x = 10 ifadesini main içerisinde kaldırırsak. Programımız hata verecektir.
        "x" değişkenini bulamayacaktır.

    */

     cout << programci1::x << endl; // :: ifadesi ile namespace'den çağırdık.
     cout << programci2::x << endl;

     programci1::Bir(); // programci1'in içerisinde yer aklan "Bir" isimli void fonksiyonunu çağırdık.
     programci2::Bir(); // programci2'in içerisinde yer aklan "Bir" isimli void fonksiyonunu çağırdık.

    /*
        Yukarıda da görüldüğü gibi "Bir" isimli fonksiyonlar farklı programcılar tarafından oluşturulmuştur.
        Aynı isime sahip olmalarına karşın, sorunsuz bir şekilde kullanabildik.
    */
	return 0;
}
