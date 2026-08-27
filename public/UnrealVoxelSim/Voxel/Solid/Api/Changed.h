#pragma once

#include "UnrealVoxelSim/Voxel/Api/Region.h"

#include <vector>

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	struct Changed final
	{
		std::vector<UnrealVoxelSim::Voxel::Api::Region> Regions;
	};
} // namespace UnrealVoxelSim::Voxel::Solid::Api
