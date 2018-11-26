// OrganizeTest.cc : Tests the Organize function
//

#include "stdafx.h"

#include "ImageThingyMajigy.h"

namespace fs = std::experimental::filesystem::v1;

int main(int argc, char **argv) {
	//Magick::InitializeMagick(*argv);

	fs::path source = "F:/";
	fs::path dest = "C:/Users/anrob/OneDrive/Imagens/SonyA100";
	std::string img_ext = "ARW";

	std::cout << img_ext << '\n';
	ImageThingyMajigy::Organize(source, dest, img_ext);
	return 0;
}
