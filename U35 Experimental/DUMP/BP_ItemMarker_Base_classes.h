// BlueprintGeneratedClass BP_ItemMarker_Base.BP_ItemMarker_Base_C
// Size: 0x260 (Inherited: 0x228)
struct ABP_ItemMarker_Base_C : AItemMarker {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* Material; 
	UPROPERTY(BlueprintReadWrite) FName ColorName; 
	UPROPERTY(BlueprintReadWrite) FLinearColor ValidColor; 

	UFUNCTION(BlueprintCallable) void SetMaterials(UMeshComponent* Mesh, UMaterialInterface* ParentMaterial, UMaterialInstanceDynamic* DynamicMaterial);
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void OnMarkerValidChanged(bool Valid);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_ItemMarker_Base(int32_t EntryPoint);
};

