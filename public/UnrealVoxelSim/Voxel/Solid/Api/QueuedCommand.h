#pragma once
#include "UnrealVoxelSim/Voxel/Solid/Api/EraseCommand.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/FillCommand.h"
#include <utility>
#include <variant>
namespace UnrealVoxelSim::Voxel::Solid::Api
{
class QueuedCommand final
{
  public:
    QueuedCommand(FillCommand value) : m_Value(std::move(value)) {}
    QueuedCommand(EraseCommand value) : m_Value(std::move(value)) {}
    [[nodiscard]] const Simulation::Api::CommandStamp &Stamp() const noexcept
    {
        return std::visit([](const auto &value) -> const Simulation::Api::CommandStamp & { return value.Stamp; }, m_Value);
    }
    [[nodiscard]] const std::variant<FillCommand, EraseCommand> &Value() const noexcept { return m_Value; }
  private:
    std::variant<FillCommand, EraseCommand> m_Value;
};
} // namespace UnrealVoxelSim::Voxel::Solid::Api
