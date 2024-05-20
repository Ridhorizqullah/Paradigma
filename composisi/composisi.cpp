#include <iostream>
#include <string>
using namespace std;

#include "jantung.H"
#include "Manusia.H" 

//composisi : one to one
//asosiasi : one to one, max many to many
//aggrefasi : one to one, max one to many

int main() {
	manusia* varManusia = new manusia("Eko");
	delete varManusia;
	return 0;
}