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

	std::time_t cftime = 
}