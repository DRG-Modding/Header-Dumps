// BlueprintGeneratedClass ENE_Grabber.ENE_Grabber_C
// Size: 0x571 (Inherited: 0x538)
struct AENE_Grabber_C : AFlyingLifter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	UWeakpointGlowComponent* WeakpointGlow; // 0x540(0x08)
	UPointLightComponent* PointLight; // 0x548(0x08)
	float Emission_Time_A4F8316045D572CD1C731997C3E8EC43; // 0x550(0x04)
	enum class ETimelineDirection Emission__Direction_A4F8316045D572CD1C731997C3E8EC43; // 0x554(0x01)
	UTimelineComponent* Emission; // 0x558(0x08)
	UMaterialInstanceDynamic* DynamicMaterial; // 0x560(0x08)
	float Emission Flash; // 0x568(0x04)
	float Emission Multiplier; // 0x56c(0x04)
	bool DiedbyCritical; // 0x570(0x01)

	void OnRep_LightOn();
	bool OnTriggerAI(FName TriggerName);
	void OnRep_DiedbyCritical();
	void UserConstructionScript();
	void Emission__FinishedFunc();
	void Emission__UpdateFunc();
	void OnMessageAI(FName TriggerName);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
	void TriggerWeakpointGlow();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	void ReceiveBeginPlay();
	void StartFizzle();
	void BndEvt__GrabberComp_K2Node_ComponentBoundEvent_3_GrabbedActorSig__DelegateSignature(AActor* aGrabbedActor);
	void BndEvt__GrabberComp_K2Node_ComponentBoundEvent_4_ReleasedActorSig__DelegateSignature(AActor* aGrabbedActor);
	void OnFrozen(AActor* Source);
	void MakeElite();
	void ExecuteUbergraph_ENE_Grabber(int32_t EntryPoint);
};

