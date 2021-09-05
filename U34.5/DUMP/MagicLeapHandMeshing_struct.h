// ScriptStruct MagicLeapHandMeshing.MagicLeapHandMesh
// Size: 0x18 (Inherited: 0x00)
struct FMagicLeapHandMesh {
	int32_t Version; // 0x00(0x04)
	int32_t DataCount; // 0x04(0x04)
	TArray<FMagicLeapHandMeshBlock> Data; // 0x08(0x10)
};

// ScriptStruct MagicLeapHandMeshing.MagicLeapHandMeshBlock
// Size: 0x28 (Inherited: 0x00)
struct FMagicLeapHandMeshBlock {
	int32_t IndexCount; // 0x00(0x04)
	int32_t VertexCount; // 0x04(0x04)
	TArray<FVector> Vertex; // 0x08(0x10)
	TArray<int32_t> Index; // 0x18(0x10)
};

