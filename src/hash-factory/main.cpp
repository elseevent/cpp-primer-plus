#include <iostream>
#include <cstdlib>
#include "IHashAlgorithm.h"
#include "HashAlgorithmFactory.h"

using namespace algorithm;
using namespace std;

int main(int argc,char * argv[]){
	int type, hash;
	const char * _str;
	if(argc > 2) {
		type = atoi(argv[1]);
		_str = argv[2];
	} else if(argc > 1) {
		type = 1;
		_str = argv[1];
	} else {
		string str("Unknow");
		_str = str.c_str();
	}
	IHashAlgorithm * alg = HashAlgorithmFactory::create(type);
	hash = alg->computeHash(_str);
	cout << hash << endl;
	delete alg;
	return 0;
}
