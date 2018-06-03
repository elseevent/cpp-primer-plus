#include "../IHashAlgorithm.h"

namespace algorithm{
	//8
	// 这是Arash Partow贡献的一个哈希函数，继承了上面以旋转以为和加操作。
	class APHash : public IHashAlgorithm{
		public:
			virtual unsigned int computeHash(const char * str){
				unsigned int hash = 0;
				int i;
				for (i= 0 ; *str; i++) {
					if ((i & 1 ) == 0 ) {
						hash ^= ((hash << 7 ) ^ (*str++) ^ (hash >> 3 ));
					} else {
						hash ^= (~((hash << 11 ) ^ (*str++) ^ (hash >> 5 )));
					}
				}
				return (hash & 0x7FFFFFFF);
			}
	};
}
