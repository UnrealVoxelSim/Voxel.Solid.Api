#pragma once
#include "UnrealVoxelSim/Simulation/Api/CommandStamp.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/Placement.h"
#include <vector>

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	struct FillCommand final
	{
		// TODO Do not put execution ordering onto the caller.
		Simulation::Api::CommandStamp Stamp;
		std::vector<Placement> Placements;
	};
}
