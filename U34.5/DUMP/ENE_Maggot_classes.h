// BlueprintGeneratedClass ENE_Maggot.ENE_Maggot_C
// Size: 0x3b0 (Inherited: 0x380)
struct AENE_Maggot_C : AMaggot {
	FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	UCapsuleComponent* Capsule; // 0x388(0x08)
	UAudioComponent* Audio; // 0x390(0x08)
	UOutlineComponent* outline; // 0x398(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x3a0(0x08)
	UParticleSystem* DeathParticle; // 0x3a8(0x08)

	void OnRep_Moving();
	void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature(enum class EDeepMovementState State);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void Died();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ENE_Maggot(int32_t EntryPoint);
};

