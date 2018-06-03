#include "../IHashAlgorithm.h"

namespace algorithm{
	//6
	// 这个算法来自Brian Kernighan 和 Dennis Ritchie的 The C Programming Language。
	// 这是一个很简单的哈希算法,使用了一系列奇怪的数字,形式如31,3131,31...31,看上去和DJB算法很相似。
	class BKDRHash : public IHashAlgorithm{
		public:
			virtual unsigned int computeHash(const char * str){
				// 31 131 1313 13131 131313 etc..
				unsigned int seed = 131;
				unsigned int hash = 0;
				while (*str) {
					hash = hash * seed + (*str++);
				}
				return (hash & 0x7FFFFFFF);
			}
	};
}
