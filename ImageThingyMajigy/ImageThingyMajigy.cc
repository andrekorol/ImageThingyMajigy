// ImageThingyMajigy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "ImageThingyMajigy.h"
namespace fs = std::experimental::filesystem::v1;

int main(int argc, char **argv) {
	//Magick::InitializeMagick(*argv);

	fs::path source = "F:/";
	fs::path dest = "C:/Users/anrob/OneDrive/Imagens/SonyA100";
	std::string img_ext = "ARW";

	ImageThingyMajigy::Organize(source, dest, img_ext);
	return 0;
}
