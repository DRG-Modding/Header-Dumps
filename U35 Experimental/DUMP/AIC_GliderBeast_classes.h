// BlueprintGeneratedClass AIC_GliderBeast.AIC_GliderBeast_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_GliderBeast_C : AFSDAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_GliderBeast(int32_t EntryPoint);
};

