#include "../IHashAlgorithm.h"

namespace algorithm{
	//5
	// 和PJW很相似，在Unix系统中使用的较多。
	class ELFHash : public IHashAlgorithm{
		public:
			virtual unsigned int computeHash(const char * str){
				unsigned int hash = 0;
				unsigned int x = 0;
				while (*str) {
					hash = (hash << 4 ) + (*str++);
					if ((x = hash & 0xF0000000L) != 0 ) {
						hash ^= (x >> 24 );
						hash &= ~x;
					}
				}
				return (hash & 0x7FFFFFFF);
			}
	};
}
