// BlueprintGeneratedClass AIC_MiniMule.AIC_MiniMule_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_MiniMule_C : AFSDAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void CustomEvent_1();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_MiniMule(int32_t EntryPoint);
};

