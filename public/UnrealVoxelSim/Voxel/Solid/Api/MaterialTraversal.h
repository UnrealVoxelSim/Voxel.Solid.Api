#pragma once

#include "UnrealVoxelSim/Voxel/Solid/Api/MaterialId.h"

#include <cstdint>

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	struct MaterialTraversal final
	{
		MaterialId Material;
		bool BlocksOccupancy{true};
		bool SupportsGroundedBody{true};
		bool AllowsSwimming{};
		std::uint16_t TraversalCost{1000};

		[[nodiscard]] constexpr bool IsValid() const noexcept { return Material.IsValid() && TraversalCost != 0; }
	};
}
