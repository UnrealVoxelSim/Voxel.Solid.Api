# UnrealVoxelSim.Voxel.Solid.Api

Engine- and storage-independent contracts for solid voxels.

`MaterialId` is a stable, compact domain identifier. Zero is invalid and represents no material only inside
`Cell`; material behavior is not implemented through per-voxel polymorphism. V1 declares Dirt, Grass, and Stone
IDs, while the implementation accepts a configured material set so additional materials do not require storage or
command-path changes.

The API segregates point queries, logical-region queries, commands, and change subscriptions. Placement requires an
empty position and a configured material. Removal requires an occupied position. Batch commands are atomic for
recoverable validation failures and report the original failing input index.

`Changed` contains logical changed regions, never physical storage partitions. Rendering, structural
physics, persistence adapters, and other consumers depend on this semantic API rather than on `Voxel.Chunked`.
