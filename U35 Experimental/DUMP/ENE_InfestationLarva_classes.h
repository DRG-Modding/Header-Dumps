// BlueprintGeneratedClass ENE_InfestationLarva.ENE_InfestationLarva_C
// Size: 0x3d8 (Inherited: 0x398)
struct AENE_InfestationLarva_C : AEnemyDeepPathfinderCharacter {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* MeleeAttack; 
	UPROPERTY(BlueprintReadWrite) UEnemyComponent* enemy; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* DropShadow; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_Larva_Move_Spray; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 

	UFUNCTION(BlueprintCallable) void OnMessageAI(FName TriggerName);
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_InfestationLarva(int32_t EntryPoint);
};

