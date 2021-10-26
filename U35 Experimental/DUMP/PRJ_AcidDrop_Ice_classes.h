// BlueprintGeneratedClass PRJ_AcidDrop_Ice.PRJ_AcidDrop_Ice_C
// Size: 0x308 (Inherited: 0x300)
struct APRJ_AcidDrop_Ice_C : APRJ_AcidDrop_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_AcidDrop_Ice(int32_t EntryPoint);
};

