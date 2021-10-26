// BlueprintGeneratedClass BP_Salvage_Point_Base.BP_Salvage_Point_Base_C
// Size: 0x260 (Inherited: 0x231)
struct ABP_Salvage_Point_Base_C : ABP_Salvage_Point_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* DistressSphere; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USingleUsableComponent* SingleUsable; 

	UFUNCTION(BlueprintCallable) void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	UFUNCTION(BlueprintCallable) void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void EnableRepair();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Salvage_Point_Base(int32_t EntryPoint);
};

