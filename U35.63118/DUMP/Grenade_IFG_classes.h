// BlueprintGeneratedClass Grenade_IFG.Grenade_IFG_C
// Size: 0x351 (Inherited: 0x334)
struct AGrenade_IFG_C : AITM_AOE_Grenade_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UPointLightComponent* PointLight; // 0x340(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x348(0x08)
	bool Stick; // 0x350(0x01)

	void OnRep_Stick();
	void AddGearStateEntries(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void EnableWeakeningEffect();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void ExecuteUbergraph_Grenade_IFG(int32_t EntryPoint);
};

