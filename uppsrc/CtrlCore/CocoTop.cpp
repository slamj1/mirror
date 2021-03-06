#include <CtrlCore/CtrlCore.h>

#ifdef PLATFORM_COCOA

NAMESPACE_UPP

#define LLOG(x)  // LOG(x)

void TopWindow::Minimize(bool effect)
{
	state = MINIMIZED;
}

TopWindow& TopWindow::FullScreen(bool b)
{
	return *this;
}

void TopWindow::Maximize(bool effect)
{
	state = MAXIMIZED;
}

void TopWindow::Overlap(bool effect)
{
	GuiLock __;
	state = OVERLAPPED;
}

TopWindow& TopWindow::TopMost(bool b, bool stay_top)
{
	GuiLock __;
	return *this;
}

bool TopWindow::IsTopMost() const
{
	return true;
}

void TopWindow::GuiPlatformConstruct()
{
}

void TopWindow::GuiPlatformDestruct()
{
}

void TopWindow::SerializePlacement(Stream& s, bool reminimize)
{
	GuiLock __;
}

END_UPP_NAMESPACE

#endif
