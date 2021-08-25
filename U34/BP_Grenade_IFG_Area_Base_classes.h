// BlueprintGeneratedClass BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_Grenade_IFG_Area_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStatusEffectTriggerComponent* StatusEffectTrigger; // 0x228(0x08)
	struct UAudioComponent* Audio; // 0x230(0x08)
	struct UParticleSystemComponent* ColdCloud; // 0x238(0x08)
	struct USphereComponent* Sphere; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float LifeTime; // 0x250(0x04)
	float ParticleDeathDuration; // 0x254(0x04)
	bool Actice; // 0x258(0x01)
	char UnknownData_259[0x7]; // 0x259(0x07)
	struct USoundBase* FieldStop_Cue; // 0x260(0x08)
	struct USoundBase* Explosion_Cue; // 0x268(0x08)
	struct USoundBase* EnterField_Cue; // 0x270(0x08)
	struct USoundBase* LeaveField_Cue; // 0x278(0x08)

	void PushMixAtDistance(float Max Distance, float Min Distance); // Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.PushMixAtDistance
	void OnRep_Actice(); // Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.OnRep_Actice
	void UserConstructionScript(); // Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.ReceiveBeginPlay
	void BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature(struct AActor* TargetActor, bool entered); // Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature
	void ActiveWeakeningEffect(); // Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.ActiveWeakeningEffect
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	void ExecuteUbergraph_BP_Grenade_IFG_Area_Base(int32_t EntryPoint); // Function BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C.ExecuteUbergraph_BP_Grenade_IFG_Area_Base
};

