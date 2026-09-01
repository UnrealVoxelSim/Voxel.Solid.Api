#pragma once

#include "UnrealVoxelSim/Voxel/Api/Position.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/EditFailure.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/EditResult.h"

#include <expected>
#include <span>

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	class IRemover
	{
	public:
		virtual ~IRemover() = default;
		[[nodiscard]] virtual std::expected<EditResult, EditFailure>
		Remove(std::span<const UnrealVoxelSim::Voxel::Api::Position> positions) = 0;
	};
}
