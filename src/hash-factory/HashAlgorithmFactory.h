#include "IHashAlgorithm.h"

#pragma once

#define SDBMh 	1
#define RSh		2
#define JSh		3
#define PJWh	4
#define ELFh	5
#define BKDRh	6
#define DJBh	7
#define APh		8
#define DEKh	9

namespace algorithm{
	class HashAlgorithmFactory{
		public:
			static IHashAlgorithm * create(const int type);
	};
}
