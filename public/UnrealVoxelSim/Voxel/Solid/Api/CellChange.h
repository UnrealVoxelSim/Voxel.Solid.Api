#pragma once

#include "UnrealVoxelSim/Voxel/Api/Position.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/Cell.h"

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	struct CellChange final
	{
		UnrealVoxelSim::Voxel::Api::Position Position{};
		Cell Previous{};
		Cell Current{};
	};
}
