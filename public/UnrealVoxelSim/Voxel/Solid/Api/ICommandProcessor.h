#pragma once
#include "UnrealVoxelSim/Simulation/Api/StepContext.h"
namespace UnrealVoxelSim::Voxel::Solid::Api
{
class ICommandProcessor
{
  public:
    virtual ~ICommandProcessor() = default;
    virtual void ProcessCommands(Simulation::Api::StepContext context) = 0;
};
} // namespace UnrealVoxelSim::Voxel::Solid::Api
