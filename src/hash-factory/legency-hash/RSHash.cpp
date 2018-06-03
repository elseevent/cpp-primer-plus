#include "../IHashAlgorithm.h"

namespace algorithm{
	//2
	// 从Robert Sedgwicks的 Algorithms in C一书中得到。
	// 已经添加了一些简单的优化的算法，以加快其散列过程。
	class RSHash : public IHashAlgorithm{
		public:
			virtual unsigned int computeHash(const char * str){
				unsigned int b = 378551;
				unsigned int a = 63689;
				unsigned int hash = 0;
				while (*str) {
					hash = hash * a + (*str++);
					a *= b;
				}
				return (hash & 0x7FFFFFFF);
			}
	};
}
