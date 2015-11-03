#ifndef _SINGLETON
#define _SINGLETON

template <class C>
class Singleton
{
	private:
		static C* inst;

	public:
		Singleton()
		{};

		~Singleton()
		{
			//delete inst;
		};

		static C* getInst()
		{
			if (!inst)
				inst = new C();

			return inst;
		}
};

template <typename C> C* Singleton<C>::inst = nullptr;

//example
//auto test = Singleton<int>::getInst();
//auto test2 = Singleton<int>::getInst();
//auto test3 = Singleton<int>::getInst();

#endif