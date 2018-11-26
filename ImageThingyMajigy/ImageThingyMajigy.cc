// ImageThingyMajigy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "ImageThingyMajigy.h"
namespace fs = std::experimental::filesystem::v1;
using namespace std::chrono_literals;
using namespace Tk;

void hello() {
	puts("Hello C++/Tk!");
}

int main(int argc, char **argv) {
	Magick::InitializeMagick(*argv);
	fs::path source = "F:/";
	fs::path dest = "C:/Users/anrob/OneDrive/Imagens/SonyA100";
	ImageThingyMajigy::Organize(source, dest);

	/*init(argv[0]);
	button(".b") - text("Say Hello") - command(hello);
	pack(".b") - padx(20) - pady(6);

	runEventLoop();*/
	return 0;
}
