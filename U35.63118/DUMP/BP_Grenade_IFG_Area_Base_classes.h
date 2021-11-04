// BlueprintGeneratedClass BP_Grenade_IFG_Area_Base.BP_Grenade_IFG_Area_Base_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_Grenade_IFG_Area_Base_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStatusEffectTriggerComponent* StatusEffectTrigger; // 0x228(0x08)
	UAudioComponent* Audio; // 0x230(0x08)
	UParticleSystemComponent* ColdCloud; // 0x238(0x08)
	USphereComponent* Sphere; // 0x240(0x08)
	USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float LifeTime; // 0x250(0x04)
	float ParticleDeathDuration; // 0x254(0x04)
	bool Actice; // 0x258(0x01)
	USoundBase* FieldStop_Cue; // 0x260(0x08)
	USoundBase* Explosion_Cue; // 0x268(0x08)
	USoundBase* EnterField_Cue; // 0x270(0x08)
	USoundBase* LeaveField_Cue; // 0x278(0x08)

	void PushMixAtDistance(float Max Distance, float Min Distance);
	void OnRep_Actice();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature(AActor* TargetActor, bool entered);
	void ActiveWeakeningEffect();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void ExecuteUbergraph_BP_Grenade_IFG_Area_Base(int32_t EntryPoint);
};

