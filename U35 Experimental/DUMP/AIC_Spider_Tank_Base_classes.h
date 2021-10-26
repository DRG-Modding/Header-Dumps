// BlueprintGeneratedClass AIC_Spider_Tank_Base.AIC_Spider_Tank_Base_C
// Size: 0x381 (Inherited: 0x374)
struct AAIC_Spider_Tank_Base_C : AAIC_Spider_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) bool HasSpecialAttack; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Spider_Tank_Base(int32_t EntryPoint);
};

