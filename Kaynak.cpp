#include <iostream>
#include "Otomobil.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	 
	Otomobil ot1("Siyah", "Audi", 100, 4);
	Otomobil ot2("K�rm�z�", "BMW", 150, 4);
	

	ot1.ruhsatBilgileriGoster();
	cout << endl << endl;
	ot2.ruhsatBilgileriGoster();
	cout << endl << endl;

	ot1.setOtomobilRenk("Turuncu");
	cout << ot1.getOtomobilRenk() << endl << endl;

	Otomobil* p = new Otomobil("Beyaz", "Porsche", 150, 3);
	p->ruhsatBilgileriGoster();
	p->setOtomobilRenk("Mavi");
	cout << endl << p->getOtomobilRenk() << endl;
	cout << "Porsche kap� say�s�: " << *(p->pKapiSayisi) << endl;
	delete p;
	

}	