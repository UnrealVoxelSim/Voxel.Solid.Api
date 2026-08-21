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
    explicit constexpr MaterialId(const std::uint32_t value) noexcept : Value_(value)
    {
    }

    [[nodiscard]] constexpr bool IsValid() const noexcept
    {
        return Value_ != 0;
    }

    [[nodiscard]] constexpr std::uint32_t Value() const noexcept
    {
        return Value_;
    }

    auto operator<=>(const MaterialId &) const = default;

  private:
    std::uint32_t Value_{};
};

static_assert(sizeof(MaterialId) == sizeof(std::uint32_t));
static_assert(std::is_trivially_copyable_v<MaterialId>);

} // namespace UnrealVoxelSim::Voxel::Solid::Api
