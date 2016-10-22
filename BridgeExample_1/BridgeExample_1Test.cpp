#include "Media.h"
#include "SysImpl.h"

int main()
{
	shared_ptr<SysImpl> windowsImpl = make_shared<WindowsImpl>();
	shared_ptr<SysImpl> linuxImpl = make_shared<LinuxImpl>();
	shared_ptr<SysImpl> unixImpl = make_shared<UNIXImpl>();

	unique_ptr<Media> m1 = make_unique<MPEG>(windowsImpl);
	unique_ptr<Media> m2 = make_unique<MPEG>(linuxImpl);
	unique_ptr<Media> m3 = make_unique<MPEG>(unixImpl);

	m1->Play();
	m2->Play();
	m3->Play();
}