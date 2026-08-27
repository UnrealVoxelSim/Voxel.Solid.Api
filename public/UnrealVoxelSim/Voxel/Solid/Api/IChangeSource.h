#pragma once

#include "UnrealVoxelSim/Events/Api/ISource.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/Changed.h"

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	using IChangeSource = Events::Api::ISource<Changed>;
}
