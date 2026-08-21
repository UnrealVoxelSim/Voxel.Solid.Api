#pragma once

#include "UnrealVoxelSim/Voxel/Api/Position.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/MaterialId.h"

namespace UnrealVoxelSim::Voxel::Solid::Api
{

struct Placement final
{
    UnrealVoxelSim::Voxel::Api::Position Position{};
    MaterialId Material{};
};

} // namespace UnrealVoxelSim::Voxel::Solid::Api
