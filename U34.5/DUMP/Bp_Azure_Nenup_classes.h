// BlueprintGeneratedClass Bp_Azure_Nenup.Bp_Azure_Nenup_C
// Size: 0x2c8 (Inherited: 0x284)
struct ABp_Azure_Nenup_C : ABP_Foliage_OpenOnProximity_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x290(0x08)
	UPointLightComponent* PointLight; // 0x298(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x2a0(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2a8(0x08)
	float Timeline_0_NewTrack_0_CCE667474C695780AD163197E2E87F35; // 0x2b0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_CCE667474C695780AD163197E2E87F35; // 0x2b4(0x01)
	UTimelineComponent* Timeline_1; // 0x2b8(0x08)
	int32_t LightIntensity; // 0x2c0(0x04)
	int32_t LightAttenuation; // 0x2c4(0x04)

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ReceiveBeginPlay();
	void PlayCloseSequence();
	void ExecuteUbergraph_Bp_Azure_Nenup(int32_t EntryPoint);
};

