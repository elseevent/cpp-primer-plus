#include <cstring>
#include "../IHashAlgorithm.h"

namespace algorithm{
	//9
	// 由伟大的Knuth在《编程的艺术 第三卷》的第六章排序和搜索中给出。
	class DEKHash : public IHashAlgorithm{
		public:
			virtual unsigned int computeHash(const char * str){
				int len= strlen(str);
				unsigned int hash = len;
				for(int i = 0; i < len; i++) {
					hash = ((hash << 5) ^ (hash >> 27)) ^ str[i];
				}
				return hash;
			}
	};
}
