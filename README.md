# UnrealVoxelSim.Voxel.Solid.Api

Engine- and storage-independent contracts for solid voxels. Placement and removal are separate synchronous
capabilities, while point/region reads and committed-change subscriptions remain independently injectable.

The API contains no command variants, command stamps, queues, or command-processing lifecycle hooks.
