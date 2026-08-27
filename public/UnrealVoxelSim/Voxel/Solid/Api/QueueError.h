#pragma once
#include <cstddef>

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	enum class QueueErrorType { InvalidStamp, EmptyPayload, DuplicateStamp, TickAlreadyProcessed };

	// TODO See todo in ICommandSink. This class is subject to removal.
	struct QueueError final
	{
		QueueErrorType Error;
		std::size_t CommandIndex{};
	};
}
