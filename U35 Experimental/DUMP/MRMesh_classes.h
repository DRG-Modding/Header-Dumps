// Class MRMesh.MeshReconstructorBase
// Size: 0x28 (Inherited: 0x28)
struct UMeshReconstructorBase : UObject {

	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	void ConnectMRMesh(UMRMeshComponent* Mesh);
};

// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x260 (Inherited: 0x1f0)
struct UMockDataMeshTrackerComponent : USceneComponent {
	FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x1f0(0x10)
	bool ScanWorld; // 0x200(0x01)
	bool RequestNormals; // 0x201(0x01)
	bool RequestVertexConfidence; // 0x202(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x203(0x01)
	TArray<FColor> BlockVertexColors; // 0x208(0x10)
	FLinearColor VertexColorFromConfidenceZero; // 0x218(0x10)
	FLinearColor VertexColorFromConfidenceOne; // 0x228(0x10)
	float UpdateInterval; // 0x238(0x04)
	UMRMeshComponent* MRMesh; // 0x240(0x08)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector> Vertices, TArray<int32_t> Triangles, TArray<FVector> Normals, TArray<float> Confidence);
	void DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);
	void ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);
};

// Class MRMesh.MRMeshComponent
// Size: 0x470 (Inherited: 0x3f0)
struct UMRMeshComponent : UPrimitiveComponent {
	UMaterialInterface* Material; // 0x3f8(0x08)
	bool bCreateMeshProxySections; // 0x400(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x401(0x01)
	bool bNeverCreateCollisionMesh; // 0x402(0x01)
	UBodySetup* CachedBodySetup; // 0x408(0x08)
	TArray<UBodySetup*> BodySetups; // 0x410(0x10)
	UMaterialInterface* WireframeMaterial; // 0x420(0x08)

	bool IsConnected();
	void ForceNavMeshUpdate();
	void Clear();
};

