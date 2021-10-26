// BlueprintGeneratedClass AIC_Spider_Shooter_Ground.AIC_Spider_Shooter_Ground_C
// Size: 0x380 (Inherited: 0x374)
struct AAIC_Spider_Shooter_Ground_C : AAIC_Spider_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Recieve_BlackboardValueChanged(FName KeyName);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Spider_Shooter_Ground(int32_t EntryPoint);
};

