#pragma once
#include "UnrealVoxelSim/Simulation/Api/CommandStamp.h"
#include "UnrealVoxelSim/Voxel/Api/Position.h"
#include <vector>
namespace UnrealVoxelSim::Voxel::Solid::Api
{
struct EraseCommand final { Simulation::Api::CommandStamp Stamp; std::vector<UnrealVoxelSim::Voxel::Api::Position> Positions; };
} // namespace UnrealVoxelSim::Voxel::Solid::Api
