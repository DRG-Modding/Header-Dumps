// BlueprintGeneratedClass ENE_Grabber.ENE_Grabber_C
// Size: 0x571 (Inherited: 0x538)
struct AENE_Grabber_C : AFlyingLifter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct UWeakpointGlowComponent* WeakpointGlow; // 0x540(0x08)
	struct UPointLightComponent* PointLight; // 0x548(0x08)
	float Emission_Time_A4F8316045D572CD1C731997C3E8EC43; // 0x550(0x04)
	char Emission__Direction_A4F8316045D572CD1C731997C3E8EC43; // 0x554(0x01)
	char UnknownData_555[0x3]; // 0x555(0x03)
	struct UTimelineComponent* Emission; // 0x558(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x560(0x08)
	float Emission Flash; // 0x568(0x04)
	float Emission Multiplier; // 0x56c(0x04)
	bool DiedbyCritical; // 0x570(0x01)

	void OnRep_LightOn(); // Function ENE_Grabber.ENE_Grabber_C.OnRep_LightOn
	bool OnTriggerAI(struct FName TriggerName); // Function ENE_Grabber.ENE_Grabber_C.OnTriggerAI
	void OnRep_DiedbyCritical(); // Function ENE_Grabber.ENE_Grabber_C.OnRep_DiedbyCritical
	void UserConstructionScript(); // Function ENE_Grabber.ENE_Grabber_C.UserConstructionScript
	void Emission__FinishedFunc(); // Function ENE_Grabber.ENE_Grabber_C.Emission__FinishedFunc
	void Emission__UpdateFunc(); // Function ENE_Grabber.ENE_Grabber_C.Emission__UpdateFunc
	void OnMessageAI(struct FName TriggerName); // Function ENE_Grabber.ENE_Grabber_C.OnMessageAI
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float amount, float BaseAmount, struct UPrimitiveComponent* Component, struct UFSDPhysicalMaterial* PhysMat, struct FName BoneName); // Function ENE_Grabber.ENE_Grabber_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature
	void TriggerWeakpointGlow(); // Function ENE_Grabber.ENE_Grabber_C.TriggerWeakpointGlow
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Grabber.ENE_Grabber_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(struct UHealthComponent* HealthComponent, float damageAmount, struct UDamageClass* DamageClass, struct AActor* damageCause, struct AController* Instigator, struct UFSDPhysicalMaterial* PhysicalMaterial); // Function ENE_Grabber.ENE_Grabber_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature
	void ReceiveBeginPlay(); // Function ENE_Grabber.ENE_Grabber_C.ReceiveBeginPlay
	void StartFizzle(); // Function ENE_Grabber.ENE_Grabber_C.StartFizzle
	void BndEvt__GrabberComp_K2Node_ComponentBoundEvent_3_GrabbedActorSig__DelegateSignature(struct AActor* aGrabbedActor); // Function ENE_Grabber.ENE_Grabber_C.BndEvt__GrabberComp_K2Node_ComponentBoundEvent_3_GrabbedActorSig__DelegateSignature
	void BndEvt__GrabberComp_K2Node_ComponentBoundEvent_4_ReleasedActorSig__DelegateSignature(struct AActor* aGrabbedActor); // Function ENE_Grabber.ENE_Grabber_C.BndEvt__GrabberComp_K2Node_ComponentBoundEvent_4_ReleasedActorSig__DelegateSignature
	void OnFrozen(struct AActor* Source); // Function ENE_Grabber.ENE_Grabber_C.OnFrozen
	void MakeElite(); // Function ENE_Grabber.ENE_Grabber_C.MakeElite
	void ExecuteUbergraph_ENE_Grabber(int32_t EntryPoint); // Function ENE_Grabber.ENE_Grabber_C.ExecuteUbergraph_ENE_Grabber
};

