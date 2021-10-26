// BlueprintGeneratedClass AIC_Spider_Spawn.AIC_Spider_Spawn_C
// Size: 0x380 (Inherited: 0x374)
struct AAIC_Spider_Spawn_C : AAIC_Spider_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Spider_Spawn(int32_t EntryPoint);
};

