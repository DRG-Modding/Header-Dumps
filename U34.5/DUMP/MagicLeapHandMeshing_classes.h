// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UMagicLeapHandMeshingComponent : UActorComponent {

	void SetUseWeightedNormals(bool bInUseWeightedNormals);
	bool DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);
	bool ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);
};

// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapHandMeshingFunctionLibrary : UBlueprintFunctionLibrary {

	bool DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);
	bool DestroyClient();
	bool CreateClient();
	bool ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);
};

