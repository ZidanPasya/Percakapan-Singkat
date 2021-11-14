#include <iostream>
using namespace std;
int main() {
	/*Muhammad Zidan Pasya
	2117051070*/
	
	string variabel_nama1;
	string variabel_nama2;
	
	//input
	getline(cin, variabel_nama1);
	getline(cin, variabel_nama2);
	cout<< " " <<endl;
	
	//output
	cout<< "###Percakapan singkat###" << endl
		<<variabel_nama1<< " : Hai salam kenal namaku \""<<variabel_nama1<<"\", nama kamu siapa?"<< endl
		<<variabel_nama2<< " : Hai salam kenal juga namaku \""<<variabel_nama2<<"\" ";
	return 0;
}
