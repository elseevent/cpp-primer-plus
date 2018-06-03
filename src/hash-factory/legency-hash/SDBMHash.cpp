#include "../IHashAlgorithm.h"

namespace algorithm{
	//1
	// 这个算法在开源的SDBM中使用，似乎对很多不同类型的数据都能得到不错的分布。
	class SDBMHash : public IHashAlgorithm{
		public:
			virtual unsigned int computeHash(const char * str){
				unsigned int hash = 0;
				while(*str){
					hash = (*str++) + (hash << 6) + (hash << 16) - hash;
				}
				return (hash & 0x7FFFFFFF);
			}
	};
}
