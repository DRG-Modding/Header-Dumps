// BlueprintGeneratedClass BP_Phys_KickableObject_Base.BP_Phys_KickableObject_Base_C
// Size: 0x294 (Inherited: 0x220)
struct ABP_Phys_KickableObject_Base_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* Scene; // 0x228(0x08)
	UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x238(0x08)
	UCapsuleComponent* UseCapsule_ForKicking; // 0x240(0x08)
	UInstantUsable* InstantUsable; // 0x248(0x08)
	bool CanTriggerSound; // 0x250(0x01)
	APlayerCharacter* KickedBy; // 0x258(0x08)
	float KickStrength; // 0x260(0x04)
	float DamageImpulseStrength; // 0x264(0x04)
	UAnimMontage* KickMontage; // 0x268(0x08)
	USoundBase* KickSound; // 0x270(0x08)
	USoundBase* ImpactSound; // 0x278(0x08)
	UParticleSystem* deathParticles; // 0x280(0x08)
	USoundCue* deathSound; // 0x288(0x08)
	float ImpactSoundCoolDown; // 0x290(0x04)

	void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void ReceiveBeginPlay();
	void destroy();
	void DestroyOvertime();
	void Play_Kick(APlayerCharacter* Kicker);
	void Spawn Bronzehead Effects();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_7_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_8_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void SpawnKickSound();
	void ExecuteUbergraph_BP_Phys_KickableObject_Base(int32_t EntryPoint);
};

