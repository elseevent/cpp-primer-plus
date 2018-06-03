#include "../IHashAlgorithm.h"

namespace algorithm{
	//7
	// 这个算法是Daniel J.Bernstein 教授发明的，是目前公布的最有效的哈希函数。
	class DJBHash : public IHashAlgorithm{
		public:
			virtual unsigned int computeHash(const char * str){
				unsigned int hash = 5381;
				while (*str) {
					hash += (hash << 5 ) + (*str++);
				}
				return (hash & 0x7FFFFFFF);
			}
	};
}
