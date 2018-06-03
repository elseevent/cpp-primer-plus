#pragma once

namespace algorithm{
	class IHashAlgorithm{
		public:
			virtual unsigned int computeHash(const char * str) = 0;
	};
}
