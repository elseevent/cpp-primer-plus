#include "IHashAlgorithm.h"
#include "HashAlgorithmFactory.h"
#include "legency-hash/SDBMHash.cpp"
#include "legency-hash/RSHash.cpp"
#include "legency-hash/JSHash.cpp"
#include "legency-hash/PJWHash.cpp"
#include "legency-hash/ELFHash.cpp"
#include "legency-hash/BKDRHash.cpp"
#include "legency-hash/DJBHash.cpp"
#include "legency-hash/APHash.cpp"
#include "legency-hash/DEKHash.cpp"

namespace algorithm{

	IHashAlgorithm * HashAlgorithmFactory::create(const int type){
		IHashAlgorithm * ret;
		switch(type){
			case SDBMh:{
				ret = new SDBMHash();
				break;
			}
			case RSh:{
				ret = new RSHash();
				break;
			}
			case JSh:{
				ret = new JSHash();
				break;
			}
			case PJWh:{
				ret = new PJWHash();
				break;
			}
			case ELFh:{				
				ret = new ELFHash();
				break;
			}
			case BKDRh:{
				ret = new BKDRHash();
				break;
			}
			case DJBh:{				
				ret = new DJBHash();
				break;
			}
			case APh:{
				ret = new APHash();
				break;
			}
			case DEKh:{
				ret = new DEKHash();
				break;
			}
			default:{
				ret = new JSHash();
				break;
			}
		}
		return ret;
	};
}
