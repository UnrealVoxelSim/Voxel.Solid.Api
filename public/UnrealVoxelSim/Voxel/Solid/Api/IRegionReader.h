#pragma once

#include "UnrealVoxelSim/Voxel/Api/ReadError.h"
#include "UnrealVoxelSim/Voxel/Api/Region.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/Cell.h"

#include <expected>
#include <span>

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	class IRegionReader
	{
	public:
		virtual ~IRegionReader() = default;

		[[nodiscard]] virtual std::expected<void, UnrealVoxelSim::Voxel::Api::ReadError> ReadRegion(
			UnrealVoxelSim::Voxel::Api::Region region,
			std::span<Cell> output) const = 0;
	};
} // namespace UnrealVoxelSim::Voxel::Solid::Api
