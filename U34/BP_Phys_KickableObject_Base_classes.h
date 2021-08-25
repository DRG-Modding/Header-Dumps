// BlueprintGeneratedClass BP_Phys_KickableObject_Base.BP_Phys_KickableObject_Base_C
// Size: 0x294 (Inherited: 0x220)
struct ABP_Phys_KickableObject_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* Scene; // 0x228(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x238(0x08)
	struct UCapsuleComponent* UseCapsule_ForKicking; // 0x240(0x08)
	struct UInstantUsable* InstantUsable; // 0x248(0x08)
	bool CanTriggerSound; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)
	struct APlayerCharacter* KickedBy; // 0x258(0x08)
	float KickStrength; // 0x260(0x04)
	float DamageImpulseStrength; // 0x264(0x04)
	struct UAnimMontage* KickMontage; // 0x268(0x08)
	struct USoundBase* KickSound; // 0x270(0x08)
	struct USoundBase* ImpactSound; // 0x278(0x08)
	struct UParticleSystem* deathParticles; // 0x280(0x08)
	struct USoundCue* deathSound; // 0x288(0x08)
	float ImpactSoundCoolDown; // 0x290(0x04)

	void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_Phys_KickableObject_Base.BP_Phys_KickableObject_Base_C.BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_Phys_KickableObject_Base.BP_Phys_KickableObject_Base_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_Phys_KickableObject_Base.BP_Phys_KickableObject_Base_C.ReceiveBeginPlay
	void destroy(); // Function BP_Phys_KickableObject_Base.BP_Phys_KickableObject_Base_C.destroy
	void DestroyOvertime(); // Function BP_Phys_KickableObject_Base.BP_Phys_KickableObject_Base_C.DestroyOvertime
	void Play_Kick(struct APlayerCharacter* Kicker); // Function BP_Phys_KickableObject_Base.BP_Phys_KickableObject_Base_C.Play_Kick
	void Spawn Bronzehead Effects(); // Function BP_Phys_KickableObject_Base.BP_Phys_KickableObject_Base_C.Spawn Bronzehead Effects
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_7_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_Phys_KickableObject_Base.BP_Phys_KickableObject_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_7_HitSig__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_8_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_Phys_KickableObject_Base.BP_Phys_KickableObject_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_8_DeathSig__DelegateSignature
	void SpawnKickSound(); // Function BP_Phys_KickableObject_Base.BP_Phys_KickableObject_Base_C.SpawnKickSound
	void ExecuteUbergraph_BP_Phys_KickableObject_Base(int32_t EntryPoint); // Function BP_Phys_KickableObject_Base.BP_Phys_KickableObject_Base_C.ExecuteUbergraph_BP_Phys_KickableObject_Base
};

