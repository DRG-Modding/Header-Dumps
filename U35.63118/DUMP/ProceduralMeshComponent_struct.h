// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8 {
	NoCap = 0,
	CreateNewSectionForCap = 1,
	UseLastSectionForCap = 2,
	EProcMeshSliceCapOption_MAX = 3
};

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// Size: 0x40 (Inherited: 0x00)
struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x00(0x10)
	TArray<uint32_t> ProcIndexBuffer; // 0x10(0x10)
	FBox SectionLocalBox; // 0x20(0x1c)
	bool bEnableCollision; // 0x3c(0x01)
	bool bSectionVisible; // 0x3d(0x01)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// Size: 0x4c (Inherited: 0x00)
struct FProcMeshVertex {
	FVector Position; // 0x00(0x0c)
	FVector Normal; // 0x0c(0x0c)
	FProcMeshTangent Tangent; // 0x18(0x10)
	FColor Color; // 0x28(0x04)
	FVector2D UV0; // 0x2c(0x08)
	FVector2D UV1; // 0x34(0x08)
	FVector2D UV2; // 0x3c(0x08)
	FVector2D UV3; // 0x44(0x08)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// Size: 0x10 (Inherited: 0x00)
struct FProcMeshTangent {
	FVector TangentX; // 0x00(0x0c)
	bool bFlipTangentY; // 0x0c(0x01)
};

