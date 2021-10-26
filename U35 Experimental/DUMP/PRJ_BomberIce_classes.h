// BlueprintGeneratedClass PRJ_BomberIce.PRJ_BomberIce_C
// Size: 0x348 (Inherited: 0x330)
struct APRJ_BomberIce_C : APRJ_BomberGoo_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate NewEventDispatcher_0_1; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_BomberIce(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void NewEventDispatcher_0_0__DelegateSignature();
};

