// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetProceduralMeshLibrary : UBlueprintFunctionLibrary {

	void SliceProceduralMesh(UProceduralMeshComponent* InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, UProceduralMeshComponent* OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, UMaterialInterface* CapMaterial);
	void GetSectionFromStaticMesh(UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, TArray<FVector> Vertices, TArray<int32_t> Triangles, TArray<FVector> Normals, TArray<FVector2D> UVs, TArray<FProcMeshTangent> Tangents);
	void GetSectionFromProceduralMesh(UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, TArray<FVector> Vertices, TArray<int32_t> Triangles, TArray<FVector> Normals, TArray<FVector2D> UVs, TArray<FProcMeshTangent> Tangents);
	void GenerateBoxMesh(FVector BoxRadius, TArray<FVector> Vertices, TArray<int32_t> Triangles, TArray<FVector> Normals, TArray<FVector2D> UVs, TArray<FProcMeshTangent> Tangents);
	void CreateGridMeshWelded(int32_t NumX, int32_t NumY, TArray<int32_t> Triangles, TArray<FVector> Vertices, TArray<FVector2D> UVs, float GridSpacing);
	void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, TArray<int32_t> Triangles);
	void CreateGridMeshSplit(int32_t NumX, int32_t NumY, TArray<int32_t> Triangles, TArray<FVector> Vertices, TArray<FVector2D> UVs, TArray<FVector2D> UV1s, float GridSpacing);
	void CopyProceduralMeshFromStaticMeshComponent(UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
	void ConvertQuadToTriangles(TArray<int32_t> Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3);
	void CalculateTangentsForMesh(TArray<FVector> Vertices, TArray<int32_t> Triangles, TArray<FVector2D> UVs, TArray<FVector> Normals, TArray<FProcMeshTangent> Tangents);
};

// Class ProceduralMeshComponent.ProceduralMeshComponent
// Size: 0x480 (Inherited: 0x420)
struct UProceduralMeshComponent : UMeshComponent {
	bool bUseComplexAsSimpleCollision; // 0x420(0x01)
	bool bUseAsyncCooking; // 0x421(0x01)
	UBodySetup* ProcMeshBodySetup; // 0x428(0x08)
	TArray<FProcMeshSection> ProcMeshSections; // 0x430(0x10)
	TArray<FKConvexElem> CollisionConvexElems; // 0x440(0x10)
	FBoxSphereBounds LocalBounds; // 0x450(0x1c)
	TArray<UBodySetup*> AsyncBodySetupQueue; // 0x470(0x10)

	void UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector> Vertices, TArray<FVector> Normals, TArray<FVector2D> UV0, TArray<FVector2D> UV1, TArray<FVector2D> UV2, TArray<FVector2D> UV3, TArray<FLinearColor> VertexColors, TArray<FProcMeshTangent> Tangents);
	void UpdateMeshSection(int32_t SectionIndex, TArray<FVector> Vertices, TArray<FVector> Normals, TArray<FVector2D> UV0, TArray<FColor> VertexColors, TArray<FProcMeshTangent> Tangents);
	void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);
	bool IsMeshSectionVisible(int32_t SectionIndex);
	int32_t GetNumSections();
	void CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector> Vertices, TArray<int32_t> Triangles, TArray<FVector> Normals, TArray<FVector2D> UV0, TArray<FVector2D> UV1, TArray<FVector2D> UV2, TArray<FVector2D> UV3, TArray<FLinearColor> VertexColors, TArray<FProcMeshTangent> Tangents, bool bCreateCollision);
	void CreateMeshSection(int32_t SectionIndex, TArray<FVector> Vertices, TArray<int32_t> Triangles, TArray<FVector> Normals, TArray<FVector2D> UV0, TArray<FColor> VertexColors, TArray<FProcMeshTangent> Tangents, bool bCreateCollision);
	void ClearMeshSection(int32_t SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);
};

