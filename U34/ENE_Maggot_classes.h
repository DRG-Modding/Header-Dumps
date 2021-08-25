// BlueprintGeneratedClass ENE_Maggot.ENE_Maggot_C
// Size: 0x3b0 (Inherited: 0x380)
struct AENE_Maggot_C : AMaggot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UCapsuleComponent* Capsule; // 0x388(0x08)
	struct UAudioComponent* Audio; // 0x390(0x08)
	struct UOutlineComponent* outline; // 0x398(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x3a0(0x08)
	struct UParticleSystem* DeathParticle; // 0x3a8(0x08)

	void OnRep_Moving(); // Function ENE_Maggot.ENE_Maggot_C.OnRep_Moving
	void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature(enum class EDeepMovementState State); // Function ENE_Maggot.ENE_Maggot_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Maggot.ENE_Maggot_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void OnFrozen(struct AActor* Source); // Function ENE_Maggot.ENE_Maggot_C.OnFrozen
	void OnUnFrozen(); // Function ENE_Maggot.ENE_Maggot_C.OnUnFrozen
	void Died(); // Function ENE_Maggot.ENE_Maggot_C.Died
	void ReceiveBeginPlay(); // Function ENE_Maggot.ENE_Maggot_C.ReceiveBeginPlay
	void ExecuteUbergraph_ENE_Maggot(int32_t EntryPoint); // Function ENE_Maggot.ENE_Maggot_C.ExecuteUbergraph_ENE_Maggot
};

