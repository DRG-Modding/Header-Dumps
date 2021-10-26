// BlueprintGeneratedClass Donkey_BreadCrumb.Donkey_BreadCrumb_C
// Size: 0x294 (Inherited: 0x220)
struct ADonkey_BreadCrumb_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Donkey_DestinationMarker; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Shape_Cone3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Shape_Cone; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* TerrainScannerMesh; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Light02; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight_NoShadow; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* mesh_front; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_Light; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Scene; 
	UPROPERTY(BlueprintReadWrite) FRotator NextPointLookat; 

	UFUNCTION(BlueprintCallable) void OnRep_NextPointLookat();
	UFUNCTION(BlueprintCallable) void SetNextArrowPoint(FVector NextPoint);
	UFUNCTION(BlueprintCallable) FVector GetArrowPoint();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Blink();
	UFUNCTION(BlueprintCallable) void Blink_Photosensitive();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Donkey_BreadCrumb(int32_t EntryPoint);
};

