// BlueprintGeneratedClass Grenade_IFG.Grenade_IFG_C
// Size: 0x351 (Inherited: 0x334)
struct AGrenade_IFG_C : AITM_AOE_Grenade_Base_C {
	char UnknownData_334[0x4]; // 0x334(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UPointLightComponent* PointLight; // 0x340(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x348(0x08)
	bool Stick; // 0x350(0x01)

	void OnRep_stick(); // Function Grenade_IFG.Grenade_IFG_C.OnRep_stick
	void AddGearStateEntries(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function Grenade_IFG.Grenade_IFG_C.AddGearStateEntries
	void EnableWeakeningEffect(); // Function Grenade_IFG.Grenade_IFG_C.EnableWeakeningEffect
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function Grenade_IFG.Grenade_IFG_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	void ExecuteUbergraph_Grenade_IFG(int32_t EntryPoint); // Function Grenade_IFG.Grenade_IFG_C.ExecuteUbergraph_Grenade_IFG
};

