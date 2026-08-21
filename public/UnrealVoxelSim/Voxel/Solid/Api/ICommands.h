#pragma once

#include "UnrealVoxelSim/Voxel/Api/Position.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/EditFailure.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/EditResult.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/Placement.h"

#include <expected>
#include <span>

namespace UnrealVoxelSim::Voxel::Solid::Api
{

class ICommands
{
  public:
    virtual ~ICommands() = default;

    [[nodiscard]] virtual std::expected<EditResult, EditFailure> Place(std::span<const Placement> placements) = 0;

    [[nodiscard]] virtual std::expected<EditResult, EditFailure> Remove(
        std::span<const UnrealVoxelSim::Voxel::Api::Position> positions) = 0;
};

} // namespace UnrealVoxelSim::Voxel::Solid::Api
