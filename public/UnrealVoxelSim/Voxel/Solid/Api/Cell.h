#pragma once

#include "UnrealVoxelSim/Voxel/Solid/Api/MaterialId.h"

#include <compare>
#include <type_traits>

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	class Cell final
	{
	public:
		constexpr Cell() noexcept = default;

		explicit constexpr Cell(const MaterialId material) noexcept : m_Material(material)
		{
		}

		[[nodiscard]] constexpr bool IsEmpty() const noexcept
		{
			return !m_Material.IsValid();
		}

		[[nodiscard]] constexpr MaterialId Material() const noexcept
		{
			return m_Material;
		}

		auto operator<=>(const Cell&) const = default;

	private:
		MaterialId m_Material{};
	};

	static_assert(sizeof(Cell) == sizeof(MaterialId));
	static_assert(std::is_trivially_copyable_v<Cell>);
}
