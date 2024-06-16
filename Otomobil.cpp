#include "Otomobil.h""

Otomobil::Otomobil(string _renk, string _model, int _beygirGucu, int kp) {
	
	renk = _renk;
	model = _model;
	beygirGucu = _beygirGucu;
	pKapiSayisi = new int(kp); // == (*pKapiSayisi = kp;) ayn� �ey.

	cout << "Constructor, " << Otomobil::model << " i�in �a��r�ld�.\n";

}

Otomobil::~Otomobil() {
	cout << "Destructor, " << Otomobil::model << " i�in �a��r�ld�.\n";
}

void Otomobil::ruhsatBilgileriGoster() {
	cout << "Model: " << Otomobil::model << endl;
	cout << "Renk: " << Otomobil::renk << endl;
	cout << "Beygir G�c�: " << Otomobil::beygirGucu << endl;
	cout << "Kap� Say�s�: " << *(Otomobil::pKapiSayisi) << endl;

}

void Otomobil::setOtomobilRenk(string _renk) {
	renk = _renk;
}

string Otomobil::getOtomobilRenk() {
	return renk;
}

void Otomobil::setOtomobilModel(string _model) {
	model = _model;
}

string Otomobil::getOtomobilModel() {
	return model;
}

void Otomobil::setOtomobilBeygirGucu(int _beygirGucu) {
	beygirGucu = _beygirGucu;
}

int Otomobil::getOtomobilBeygirGucu() {
	return beygirGucu;
}