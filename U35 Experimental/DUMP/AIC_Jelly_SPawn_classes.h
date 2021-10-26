// BlueprintGeneratedClass AIC_Jelly_SPawn.AIC_Jelly_Spawn_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_Jelly_Spawn_C : AFSDAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) AENE_Jelly_Passive_Mother_C* Mother; 

	UFUNCTION(BlueprintCallable) AENE_Jelly_Passive_Mother_C* FindNewMother();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnDeath(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ReceivePossess(APawn* PossessedPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Jelly_Spawn(int32_t EntryPoint);
};

