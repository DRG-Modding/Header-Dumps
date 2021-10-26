// BlueprintGeneratedClass AIC_Spider_Tank_Normal.AIC_Spider_Tank_Normal_C
// Size: 0x390 (Inherited: 0x381)
struct AAIC_Spider_Tank_Normal_C : AAIC_Spider_Tank_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Spider_Tank_Normal(int32_t EntryPoint);
};

