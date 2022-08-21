#include <iostream>
#include <fstream>
#include <boost/algorithm/string.hpp>

const char * versio = "1.0.0.210822";

void AldoniCxaretrevenigo (std::fstream& el, std::ofstream& en, std::string cxeno, std::string enkio) {
	if (el.is_open()) {
		while (el) {
			getline(el, cxeno);
			char sl = '<';
			char b = 'b';
			char r = 'r';
			char sp = '>';
			
			cxeno.push_back(sl);
			cxeno.push_back(b);
			cxeno.push_back(r);
			cxeno.push_back(sp);
			en << cxeno << std::endl;
		};
			en << cxeno << std::endl;
	};
}

int main(int argc, char *argv[]){
	
	if (argv[1] == 0) {
		printf ("************* ERARO *************\nUzado:\n  htmltekstigilo <fonta-dosiero> <eligajxa-dosiero>\nEkzemplo:\n  htmltekstigilo militokajpaco.txt porhtml.txt\n");
		printf ("*********************************\nNomo:\n htmltekstigilo\nAutoro:\n arbttrn6 (arturaiwasan[@]gmail.com)\nPriskribo:\n Cxi tiu programo aldonas <br> al fino de linioj\n\nVersio: %s\n*********************************\n", versio);
	};
	std::fstream el (argv[1]);
	std::ofstream en (argv[2]);
	std::string cxeno;

	AldoniCxaretrevenigo(el, en, cxeno, "<br>");

	el.close();
	en.close();
	return 0;
}
