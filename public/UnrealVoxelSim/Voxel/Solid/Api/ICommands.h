#pragma once

#include "UnrealVoxelSim/Voxel/Api/Position.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/EditFailure.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/EditResult.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/Placement.h"

#include <expected>
#include <span>

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	// TODO Split this command surface into separate capability interfaces.
	//
	// Place and Remove are independent domain commands and should not be coupled through a single
	// ICommands interface. Consumers should depend only on the operations they actually need.
	//
	// Prefer dedicated command sinks such as IPlacementSink and IRemovalSink. A concrete
	// Voxel::Solid implementation may implement both, while callers receive only the narrower
	// interface required by their use case.
	class ICommands
	{
	public:
		virtual ~ICommands() = default;

		[[nodiscard]] virtual std::expected<EditResult, EditFailure> Place(std::span<const Placement> placements) = 0;

		[[nodiscard]] virtual std::expected<EditResult, EditFailure> Remove(
			std::span<const UnrealVoxelSim::Voxel::Api::Position> positions) = 0;
	};
} // namespace UnrealVoxelSim::Voxel::Solid::Api
