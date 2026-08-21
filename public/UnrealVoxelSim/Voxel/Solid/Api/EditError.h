#pragma once

namespace UnrealVoxelSim::Voxel::Solid::Api
{

enum class EditError
{
    OutOfBounds,
    DuplicatePosition,
    UnknownMaterial,
    Occupied,
    Empty,
    StorageConflict,
};

} // namespace UnrealVoxelSim::Voxel::Solid::Api
