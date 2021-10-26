// BlueprintGeneratedClass AIC_Woodlouse_Youngling.AIC_Woodlouse_Youngling_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_Woodlouse_Youngling_C : AEnemyAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Woodlouse_Youngling(int32_t EntryPoint);
};

