// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UMagicLeapHandMeshingComponent : UActorComponent {

	UFUNCTION(BlueprintCallable) void SetUseWeightedNormals(bool bInUseWeightedNormals);
	UFUNCTION(BlueprintCallable) bool DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);
	UFUNCTION(BlueprintCallable) bool ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);
};

// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapHandMeshingFunctionLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) bool DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);
	UFUNCTION(BlueprintCallable) bool DestroyClient();
	UFUNCTION(BlueprintCallable) bool CreateClient();
	UFUNCTION(BlueprintCallable) bool ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);
};

