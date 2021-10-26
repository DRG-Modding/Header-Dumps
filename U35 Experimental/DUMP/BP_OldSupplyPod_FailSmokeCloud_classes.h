// BlueprintGeneratedClass BP_OldSupplyPod_FailSmokeCloud.BP_OldSupplyPod_FailSmokeCloud_C
// Size: 0x288 (Inherited: 0x264)
struct ABP_OldSupplyPod_FailSmokeCloud_C : ABP_Damage_Cloud_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStatusEffectsComponent* StatusEffects; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 

	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_OldSupplyPod_FailSmokeCloud(int32_t EntryPoint);
};

