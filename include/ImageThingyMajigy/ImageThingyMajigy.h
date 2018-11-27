#ifndef IMAGETHINGYMAJIGY_IMAGETHINGYMAJIGY_H_
#define IMAGETHINGYMAJIGY_IMAGETHINGYMAJIGY_H_

#pragma once
#include "stdafx.h"

namespace ImageThingyMajigy {
	void Organize(std::experimental::filesystem::v1::path source,
				  std::experimental::filesystem::v1::path destination,
				  std::string img_extension);
}
#endif  // IMAGETHINGYMAJIGY_IMAGETHINGYMAJIGY_H_
