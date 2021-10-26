// ScriptStruct MagicLeapHandMeshing.MagicLeapHandMesh
// Size: 0x18 (Inherited: 0x00)
struct FMagicLeapHandMesh {
	UPROPERTY(BlueprintReadWrite) int32_t Version; 
	UPROPERTY(BlueprintReadWrite) int32_t DataCount; 
	UPROPERTY(BlueprintReadWrite) TArray<FMagicLeapHandMeshBlock> Data; 
};

// ScriptStruct MagicLeapHandMeshing.MagicLeapHandMeshBlock
// Size: 0x28 (Inherited: 0x00)
struct FMagicLeapHandMeshBlock {
	UPROPERTY(BlueprintReadWrite) int32_t IndexCount; 
	UPROPERTY(BlueprintReadWrite) int32_t VertexCount; 
	UPROPERTY(BlueprintReadWrite) TArray<FVector> Vertex; 
	UPROPERTY(BlueprintReadWrite) TArray<int32_t> Index; 
};

