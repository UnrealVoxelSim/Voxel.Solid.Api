#pragma once

#include <compare>
#include <cstdint>
#include <type_traits>

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	class MaterialId final
	{
	public:
		constexpr MaterialId() noexcept = default;

		explicit constexpr MaterialId(const std::uint32_t value) noexcept : m_Value(value)
		{
		}

		[[nodiscard]] constexpr bool IsValid() const noexcept
		{
			return m_Value != 0;
		}

		[[nodiscard]] constexpr std::uint32_t Value() const noexcept
		{
			return m_Value;
		}

		auto operator<=>(const MaterialId&) const = default;

	private:
		std::uint32_t m_Value{};
	};

	static_assert(sizeof(MaterialId) == sizeof(std::uint32_t));
	static_assert(std::is_trivially_copyable_v<MaterialId>);
} // namespace UnrealVoxelSim::Voxel::Solid::Api
