#pragma once
#include "UnrealVoxelSim/Simulation/Api/CommandStamp.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/Placement.h"
#include <vector>
namespace UnrealVoxelSim::Voxel::Solid::Api
{
struct FillCommand final { Simulation::Api::CommandStamp Stamp; std::vector<Placement> Placements; };
} // namespace UnrealVoxelSim::Voxel::Solid::Api
