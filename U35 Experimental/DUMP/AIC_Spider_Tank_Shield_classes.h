// BlueprintGeneratedClass AIC_Spider_Tank_Shield.AIC_Spider_Tank_Shield_C
// Size: 0x390 (Inherited: 0x381)
struct AAIC_Spider_Tank_Shield_C : AAIC_Spider_Tank_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Spider_Tank_Shield(int32_t EntryPoint);
};

