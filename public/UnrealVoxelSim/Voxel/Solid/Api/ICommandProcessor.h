#pragma once
#include "UnrealVoxelSim/Simulation/Api/StepContext.h"

namespace UnrealVoxelSim::Voxel::Solid::Api
{
	/* TODO This interface exposes an internal Voxel::Solid simulation phase as public API.
	*
	* "ProcessCommands" sounds like a domain capability, but the interface does not accept commands.
	* Instead, it requires an external caller to know that Voxel::Solid maintains queued commands
	* that must be processed explicitly during simulation execution.
	*
	* The public API should expose the actual domain operation used to submit solid-voxel commands.
	* How and when queued commands are consumed is an implementation/lifecycle concern.
	*
	* If command processing must occur once per simulation step, the Voxel::Solid implementation
	* should participate in the generic simulation tick sequence assembled by
	* Application::Composition rather than exposing a dedicated ICommandProcessor interface.
	*/
	class ICommandProcessor
	{
	public:
		virtual ~ICommandProcessor() = default;
		virtual void ProcessCommands(Simulation::Api::StepContext context) = 0;
	};
} // namespace UnrealVoxelSim::Voxel::Solid::Api
