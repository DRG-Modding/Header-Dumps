// BlueprintGeneratedClass BP_EscortGem_Heartstone.BP_EscortGem_Heartstone_C
// Size: 0x360 (Inherited: 0x321)
struct ABP_EscortGem_Heartstone_C : ABP_Gem_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* HeartStoneGemIdle; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_OmoranHeartStoneMagic_01; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewTrack_0_0B9A7E48466E6979BF52FEBAB3551DF1; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_0B9A7E48466E6979BF52FEBAB3551DF1; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 

	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Receive_OnDeposited(APlayerCharacter* fromPlayer);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_EscortGem_Heartstone(int32_t EntryPoint);
};

