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
    QueuedCommand(FillCommand value) : Value_(std::move(value)) {}
    QueuedCommand(EraseCommand value) : Value_(std::move(value)) {}
    [[nodiscard]] const Simulation::Api::CommandStamp &Stamp() const noexcept
    {
        return std::visit([](const auto &value) -> const Simulation::Api::CommandStamp & { return value.Stamp; }, Value_);
    }
    [[nodiscard]] const std::variant<FillCommand, EraseCommand> &Value() const noexcept { return Value_; }
  private:
    std::variant<FillCommand, EraseCommand> Value_;
};
} // namespace UnrealVoxelSim::Voxel::Solid::Api
