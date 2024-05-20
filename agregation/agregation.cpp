#include <iostream>
using namespace std;


#include "anak.H"
#include "ibu.H"

int main() { //agregas1
	ibu* varIbu = new ibu("dini");
	ibu* varibu2 = new ibu("novi");
	anak* varAnak1 = new anak("tono");
	anak* varAnak2 = new anak("rini");
	anak* varAnak3 = new anak("Dewi");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
	varibu2->tambahAnak(varAnak3);
	varibu2->tambahAnak(varAnak1);
};