// BlueprintGeneratedClass AIC_Donkey.AIC_Donkey_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_Donkey_C : AFSDAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnOverlapsChanged(int32_t OverlapCount);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Donkey(int32_t EntryPoint);
};

