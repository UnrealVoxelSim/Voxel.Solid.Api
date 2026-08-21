#pragma once

#include <cstddef>

namespace UnrealVoxelSim::Voxel::Solid::Api
{

struct EditResult final
{
    std::size_t ChangedVoxelCount{};
};

} // namespace UnrealVoxelSim::Voxel::Solid::Api
