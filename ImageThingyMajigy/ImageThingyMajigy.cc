// ImageThingyMajigy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ImageThingyMajigy.h"
namespace fs = std::experimental::filesystem::v1;
using namespace std::chrono_literals;

int main(int argc, char **argv) {
	Magick::InitializeMagick(*argv);
	fs::path dest = "C:/Users/anrob/OneDrive/Imagens/SonyA100";
	ImageThingyMajigy::Organize(dest);
	// Test UTF-8 emcoding on GitHub
	return 0;
}
