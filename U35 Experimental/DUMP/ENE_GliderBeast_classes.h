// BlueprintGeneratedClass ENE_GliderBeast.ENE_GliderBeast_C
// Size: 0x430 (Inherited: 0x3c8)
struct AENE_GliderBeast_C : AFlyingEnemyDeepPathfinderCharacter {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* GliderBeastDeath_Cue; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* GliderBeastGrabOneShotScream; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* GliderBeastIdleScream; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* GliderBeastAttachScream; 
	UPROPERTY(BlueprintReadWrite) UAIPlayerControlComponent* AIPlayerControl; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UEnemyComponent* enemy; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle AudioScreamHandle; 
	UPROPERTY(BlueprintReadWrite) bool IsControlledByPlayer; 
	UPROPERTY(BlueprintReadWrite) bool LastScreamForced; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* LastPlayedScream; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* NewVar_1; 

	UFUNCTION(BlueprintCallable) void PlayScream(UAudioComponent* ForcedScream);
	UFUNCTION(BlueprintCallable) void OnNotifyEnd_71AD1CB34498196F772390944624EEFE(FName NotifyName);
	UFUNCTION(BlueprintCallable) void OnNotifyBegin_71AD1CB34498196F772390944624EEFE(FName NotifyName);
	UFUNCTION(BlueprintCallable) void OnInterrupted_71AD1CB34498196F772390944624EEFE(FName NotifyName);
	UFUNCTION(BlueprintCallable) void OnBlendOut_71AD1CB34498196F772390944624EEFE(FName NotifyName);
	UFUNCTION(BlueprintCallable) void OnCompleted_71AD1CB34498196F772390944624EEFE(FName NotifyName);
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void OnControlledByPlayer(bool IsControlled, bool IsLocallyControlled);
	UFUNCTION(BlueprintCallable) void ScreamUpdate();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_GliderBeast(int32_t EntryPoint);
};

