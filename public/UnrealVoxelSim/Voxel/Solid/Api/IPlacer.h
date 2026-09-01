#pragma once

#include "UnrealVoxelSim/Voxel/Solid/Api/EditFailure.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/EditResult.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/Placement.h"

#include <expected>
#include <span>

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	class IPlacer
	{
	public:
		virtual ~IPlacer() = default;
		[[nodiscard]] virtual std::expected<EditResult, EditFailure> Place(std::span<const Placement> placements) = 0;
	};
}
