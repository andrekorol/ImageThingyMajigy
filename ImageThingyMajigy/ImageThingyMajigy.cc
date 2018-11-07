// ImageThingyMajigy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ImageThingyMajigy.h"
namespace fs = std::experimental::filesystem::v1;
using namespace std::chrono_literals;

int main(int argc, char **argv) {
	Magick::InitializeMagick(*argv);
	fs::path dest = "C:/Users/anrob/OneDrive/Imagens/SonyA100/2017/September/9-8-2017";
	/*ImageThingyMajigy::Organize(dest);*/
	fs::path p = dest / "DSC03327.ARW";
	auto ftime = fs::last_write_time(p);

	std::time_t cftime = decltype(ftime)::clock::to_time_t(ftime); // assuming system clock

	char buffer[32];
	errno_t errNum;
	struct tm newtime;
	errNum = localtime_s(&newtime, &cftime);
	if (errNum) {
		printf("Invalid argument to localtime_s");
		return 1;
	}
	errNum = asctime_s(buffer, 32, &newtime);
	if (errNum) {
		printf("Error code: %d", (int)errNum);
		return 1;
	}
	std::cout << "File write time is " << buffer << '\n';
	return 0;
}