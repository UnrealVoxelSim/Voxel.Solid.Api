#pragma once
#include "UnrealVoxelSim/Voxel/Solid/Api/QueueError.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/QueuedCommand.h"
#include <expected>
#include <span>

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	/* TODO Reconsider this generic command sink.
	*
	* The public API should expose domain commands, not the implementation mechanism used to defer
	* their execution. "QueuedCommand" leaks the fact that Voxel::Solid internally uses a command
	* queue, while ICommandSink couples all supported command types into one capability.
	*
	* Prefer separate command-specific sinks such as IPlacementSink and IRemovalSink so consumers
	* depend only on the operations they actually require. A concrete implementation may enqueue
	* both kinds of requests internally, but queuing and the common command representation should
	* remain implementation details.
	*/
	class ICommandSink
	{
	public:
		virtual ~ICommandSink() = default;
		[[nodiscard]] virtual std::expected<void, QueueError> Submit(std::span<const QueuedCommand> commands) = 0;
	};
}
