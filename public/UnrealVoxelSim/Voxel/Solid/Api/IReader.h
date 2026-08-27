#pragma once

#include "UnrealVoxelSim/Voxel/Api/Position.h"
#include "UnrealVoxelSim/Voxel/Api/ReadError.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/Cell.h"

#include <expected>

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	class IReader
	{
	public:
		virtual ~IReader() = default;

		[[nodiscard]] virtual std::expected<Cell, UnrealVoxelSim::Voxel::Api::ReadError> Read(
			UnrealVoxelSim::Voxel::Api::Position position) const noexcept = 0;
	};
} // namespace UnrealVoxelSim::Voxel::Solid::Api
