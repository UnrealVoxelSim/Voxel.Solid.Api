#include "UnrealVoxelSim/Voxel/Solid/Api/Cell.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/StandardMaterials.h"

#include <gtest/gtest.h>

namespace UnrealVoxelSim::Voxel::Solid::Api
{
namespace
{

static_assert(Cell{}.IsEmpty());
static_assert(!Cell{StandardMaterials::Dirt}.IsEmpty());

TEST(CellTest, EmptyVoxelHasNoValidMaterial)
{
    const Cell voxel;

    EXPECT_TRUE(voxel.IsEmpty());
    EXPECT_FALSE(voxel.Material().IsValid());
}

TEST(CellTest, StandardMaterialsHaveStableDistinctIdentifiers)
{
    EXPECT_EQ(StandardMaterials::Dirt.Value(), 1U);
    EXPECT_EQ(StandardMaterials::Grass.Value(), 2U);
    EXPECT_EQ(StandardMaterials::Stone.Value(), 3U);
    EXPECT_EQ(StandardMaterials::Trunk.Value(), 4U);
    EXPECT_EQ(StandardMaterials::Plank.Value(), 5U);
}

}
}
