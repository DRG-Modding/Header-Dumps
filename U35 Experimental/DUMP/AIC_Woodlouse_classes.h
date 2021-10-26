// BlueprintGeneratedClass AIC_Woodlouse.AIC_Woodlouse_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_Woodlouse_C : AEnemyAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Woodlouse(int32_t EntryPoint);
};

