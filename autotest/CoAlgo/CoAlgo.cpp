#include <Core/Core.h>

using namespace Upp;

CONSOLE_APP_MAIN
{
	StdLogSetup(LOG_COUT|LOG_FILE);
	
	SeedRandom(0);
	
	Vector<int> h;
	for(int i = 0; i < 100000; i++)
		h << Random(5000);
	
	ASSERT(CoSum(h) == Sum(h));
	ASSERT(FindMin(h) == CoFindMin(h));
	ASSERT(FindMax(h) == CoFindMax(h));
	ASSERT(Min(h) == CoMin(h));
	ASSERT(Max(h) == CoMax(h));
	for(int i = 0; i < h.GetCount(); i++)
		ASSERT(FindIndex(h, h[i]) == FindIndex(h, h[i]));
	
	ASSERT(Count(h, 200) == CoCount(h, 200));
	ASSERT(CountIf(h, [](auto x) { return x % 17 == 0; }) == CoCountIf(h, [](auto x) { return x % 17 == 0; }));
	
	LOG("============ OK");
}
