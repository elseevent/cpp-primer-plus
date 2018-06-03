#include "../IHashAlgorithm.h"

namespace algorithm{
	//3
	// Justin Sobel写的一个位操作的哈希函数。
	class JSHash : public IHashAlgorithm{
		public:
			virtual unsigned int computeHash(const char * str){
				unsigned int hash = 1315423911;
				while (*str) {
					hash ^= ((hash << 5 ) + (*str++) + (hash >> 2 ));
				}
				return (hash & 0x7FFFFFFF);
			}
	};
}
