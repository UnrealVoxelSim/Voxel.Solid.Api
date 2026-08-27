#pragma once

#include "UnrealVoxelSim/Voxel/Solid/Api/Cell.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/EditError.h"

#include <cstddef>

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	struct EditFailure final
	{
		EditError Error{};
		std::size_t InputIndex{};
		Cell Actual{};
	};
} // namespace UnrealVoxelSim::Voxel::Solid::Api
