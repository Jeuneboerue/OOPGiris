#include "Otomobil.h""

Otomobil::Otomobil(string _renk, string _model, int _beygirGucu, int kp) {
	
	renk = _renk;
	model = _model;
	beygirGucu = _beygirGucu;
	pKapiSayisi = new int(kp); // == (*pKapiSayisi = kp;) ayný þey.

	cout << "Constructor, " << Otomobil::model << " için çaðýrýldý.\n";

}

Otomobil::~Otomobil() {
	cout << "Destructor, " << Otomobil::model << " için çaðýrýldý.\n";
}

void Otomobil::ruhsatBilgileriGoster() {
	cout << "Model: " << Otomobil::model << endl;
	cout << "Renk: " << Otomobil::renk << endl;
	cout << "Beygir Gücü: " << Otomobil::beygirGucu << endl;
	cout << "Kapý Sayýsý: " << *(Otomobil::pKapiSayisi) << endl;

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