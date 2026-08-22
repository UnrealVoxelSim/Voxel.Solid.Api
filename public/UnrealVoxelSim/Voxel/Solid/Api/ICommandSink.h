#pragma once
#include "UnrealVoxelSim/Voxel/Solid/Api/QueueError.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/QueuedCommand.h"
#include <expected>
#include <span>
namespace UnrealVoxelSim::Voxel::Solid::Api
{
class ICommandSink
{
  public:
    virtual ~ICommandSink() = default;
    [[nodiscard]] virtual std::expected<void, QueueError> Submit(std::span<const QueuedCommand> commands) = 0;
};
} // namespace UnrealVoxelSim::Voxel::Solid::Api
