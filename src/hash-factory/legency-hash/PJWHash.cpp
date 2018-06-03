#include "../IHashAlgorithm.h"

namespace algorithm{
	//4
	// 该散列算法是基于贝尔实验室的彼得J温伯格的的研究。
	// 在Compilers一书中（原则，技术和工具），建议采用这个算法的散列函数的哈希方法。
	class PJWHash : public IHashAlgorithm{
		public:
			virtual unsigned int computeHash(const char * str){
				unsigned int BitsInUnignedInt = (unsigned int )(sizeof(unsigned int ) * 8 );
				unsigned int ThreeQuarters = (unsigned int )((BitsInUnignedInt * 3 ) / 4 );
				unsigned int OneEighth = (unsigned int )(BitsInUnignedInt / 8 );
				unsigned int HighBits = (unsigned int )( 0xFFFFFFFF ) << (BitsInUnignedInt - OneEighth);
				unsigned int hash = 0;
				unsigned int test = 0;
				while (*str) {
					hash = (hash << OneEighth) + (*str++);
					if ((test = hash & HighBits) != 0 ) {
						hash = ((hash ^ (test >> ThreeQuarters)) & (~HighBits));
					}
				}
				return (hash & 0x7FFFFFFF);
			}
	};
}
