#pragma once
#include <cstddef>
namespace UnrealVoxelSim::Voxel::Solid::Api
{
enum class QueueErrorType { InvalidStamp, EmptyPayload, DuplicateStamp, TickAlreadyProcessed };
struct QueueError final { QueueErrorType Error; std::size_t CommandIndex{}; };
} // namespace UnrealVoxelSim::Voxel::Solid::Api
