#ifndef XX_FACTORY
#define XX_FACTORY

#include <unordered_map>
#include <functional>
#include <string>

namespace WDesignPattern
{
	class XXProduct;  /* 产品类 */

	class XXFactory		/* 工厂类 */
	{
	public:
		typedef std::unordered_map<std::string, std::function<XXProduct*()> > registry_map;

		// 
		static XXProduct *instantiate(const std::string &name)
		{
			auto it = XXFactory::registry().find(name);
			return it == XXFactory::registry().end() ? nullptr : (it->second)();
		}

		static registry_map &registry()
		{
			static registry_map impl;
			return impl;
		}
	};
}

#endif