#ifndef IMAGETHINGYMAJIGY_IMAGETHINGYMAJIGY_H_
#define IMAGETHINGYMAJIGY_IMAGETHINGYMAJIGY_H_

#ifdef _WIN32
#pragma once
#include "stdafx.h"

namespace fs = std::experimental::filesystem::v1;
#else // _WIN32
#include <cstdio>
#include <cstdlib>
#include <cerrno>
#include <ctime>
#include <algorithm>
#include <unordered_map>
#include <filesystem>
#include <iostream>
#include <string>
#include <vector>

#include <Magick++.h>

namespace fs = std::filesystem;
#endif // _WIN32

namespace ImageThingyMajigy {
	//void Organize(fs::path destination) {
	//	struct tm* clock;
	//	struct _stat attrib;
	//	fs::path top = fs::current_path();
	//	std::vector<fs::path> files;
	//	for (const auto &p : fs::recursive_directory_iterator(top)) {
	//		if (fs::is_regular_file(p)) {
	//			files.push_back(p.path());
	//		}
	//	}
	//	if (!files.empty()) {
	//		std::unordered_map<int, std::string> months = { { 0, "January" },
	//			{ 1, "February" },{ 2, "March" },{ 3, "April" },{ 4, "May" },
	//			{ 5, "June" },{ 6, "July" },{ 7, "August" },{ 8, "September" },
	//			{ 9, "October" },{ 10, "November" },{ 11, "December" } };

	//		// Note that months start counting from 0,
	//		// since gmtime(&(attrib.st_mtime))->tm_mon starts from 0, i.e.,
	//		// Month (0-11; January = 0). Look at the clock assignment below.
	//		
	//		fs::current_path(destination);
	//		for (auto i = files.begin(); i != files.end(); ++i) {
	//			_stat(((fs::path)*i).string().c_str(), &attrib);
	//			clock = gmtime_s(&(attrib.st_mtime));
	//			std::string modified_date = std::to_string(clock->tm_mon + 1) +
	//				"-" + std::to_string(clock->tm_mday) +
	//				"-" + std::to_string(clock->tm_year + 1900);
	//			std::string extension = ((fs::path)*i).extension().string();
	//			extension.erase(std::remove(extension.begin(), extension.end(),
	//				'.'), extension.end());
	//			std::string file_destination_str = destination.string() + "/" +
	//				extension + "/" +
	//				std::to_string(clock->tm_year + 1900) + "/" +
	//				months.at(clock->tm_mon) + "/" + modified_date + "/" +
	//				((fs::path) *i).filename().string();
	//			std::replace(file_destination_str.begin(),
	//				file_destination_str.end(), '\\', '/');
	//			fs::path file_destination_path = (fs::path) file_destination_str;
	//			if (!fs::exists(file_destination_path)) {
	//				fs::create_directories(file_destination_path);
	//			}
	//			fs::rename((fs::path) *i, file_destination_path);
	//		}
	//	}
	//	fs::path dir_path;
	//	std::vector<fs::path> directories;
	//	for (const auto &p : fs::recursive_directory_iterator(destination)) {
	//		dir_path = p.path();
	//		if (fs::is_directory(dir_path)) {
	//			directories.push_back(fs::canonical(dir_path));
	//		}
	//	}
	//	for (std::vector<fs::path>::reverse_iterator rit = directories.rbegin();
	//		rit != directories.rend(); ++rit) {
	//		if (fs::is_empty(*rit)) {
	//			fs::remove(*rit);
	//		}
	//	}
	//}
}
#endif  // IMAGETHINGYMAJIGY_IMAGETHINGYMAJIGY_H_
