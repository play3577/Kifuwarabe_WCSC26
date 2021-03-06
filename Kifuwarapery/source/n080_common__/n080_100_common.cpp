﻿#include "../../header/n080_common__/n080_100_common.hpp"


#if defined LEARN
Eraser SYNCCOUT;
Eraser SYNCENDL;
#endif

// 乱数の種☆？（＾ｑ＾）？
std::mt19937_64 g_randomTimeSeed(std::chrono::system_clock::now().time_since_epoch().count());

std::ostream& operator << (std::ostream& os, SyncCout sc) {
	static Mutex m;
	if (sc == IOLock  ) { m.lock();   }
	if (sc == IOUnlock) { m.unlock(); }
	return os;
}
