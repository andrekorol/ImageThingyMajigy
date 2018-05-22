#pragma once
#include "stdafx.h"
namespace fs = std::experimental::filesystem::v1;

namespace ImageThingyMajigy {
	void Organize(fs::path destination) {
		struct tm* clock;
		struct _stat attrib;
		fs::path top = fs::current_path();
		std::vector<fs::path> files;
		for (const auto &p : fs::recursive_directory_iterator(top)) {
			if (fs::is_regular_file(p)) {
				files.push_back(p.path());
			}
		}
		for (const auto &file : files) {
			std::cout << file << '\n';
		}
		/*if (!files.empty())*/ 
	}
}
