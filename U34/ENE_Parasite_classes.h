// BlueprintGeneratedClass ENE_Parasite.ENE_Parasite_C
// Size: 0x3c0 (Inherited: 0x390)
struct AENE_Parasite_C : AParasiteEnemy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UWeakpointGlowComponent* WeakpointGlow; // 0x398(0x08)
	struct USphereComponent* Sphere; // 0x3a0(0x08)
	struct UMaterialInstanceDynamic* Dynamic Material; // 0x3a8(0x08)
	float Emission Multiplier; // 0x3b0(0x04)
	float Emission Flash; // 0x3b4(0x04)
	float Displacement Intensity; // 0x3b8(0x04)
	float Displacement Burst; // 0x3bc(0x04)

	void ShowDamageEffects(struct UParticleSystem* Particles, struct FVector Location, struct FRotator Orientation); // Function ENE_Parasite.ENE_Parasite_C.ShowDamageEffects
	void ReceiveBeginPlay(); // Function ENE_Parasite.ENE_Parasite_C.ReceiveBeginPlay
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Parasite.ENE_Parasite_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void ExecuteUbergraph_ENE_Parasite(int32_t EntryPoint); // Function ENE_Parasite.ENE_Parasite_C.ExecuteUbergraph_ENE_Parasite
};

