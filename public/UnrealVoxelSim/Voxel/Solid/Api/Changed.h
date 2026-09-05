#pragma once

#include "UnrealVoxelSim/Voxel/Api/Region.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/CellChange.h"

#include <vector>

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	struct Changed final
	{
		std::vector<CellChange> Cells;
		std::vector<UnrealVoxelSim::Voxel::Api::Region> Regions;
	};
}
