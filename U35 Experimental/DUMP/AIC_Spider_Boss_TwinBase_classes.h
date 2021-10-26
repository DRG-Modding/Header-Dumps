// BlueprintGeneratedClass AIC_Spider_Boss_TwinBase.AIC_Spider_Boss_TwinBase_C
// Size: 0x380 (Inherited: 0x374)
struct AAIC_Spider_Boss_TwinBase_C : AAIC_Spider_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void StartSpeedModifier();
	UFUNCTION(BlueprintCallable) void Recieve_BlackboardValueChanged(FName KeyName);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Spider_Boss_TwinBase(int32_t EntryPoint);
};

