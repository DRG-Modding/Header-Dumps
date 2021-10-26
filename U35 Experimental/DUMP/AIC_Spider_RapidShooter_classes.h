// BlueprintGeneratedClass AIC_Spider_RapidShooter.AIC_Spider_RapidShooter_C
// Size: 0x380 (Inherited: 0x374)
struct AAIC_Spider_RapidShooter_C : AAIC_Spider_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Recieve_BlackboardValueChanged(FName KeyName);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Spider_RapidShooter(int32_t EntryPoint);
};

