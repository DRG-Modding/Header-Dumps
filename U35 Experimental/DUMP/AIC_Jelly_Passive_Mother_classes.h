// BlueprintGeneratedClass AIC_Jelly_Passive_Mother.AIC_Jelly_Passive_Mother_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_Jelly_Passive_Mother_C : AFSDAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Jelly_Passive_Mother(int32_t EntryPoint);
};

