// BlueprintGeneratedClass ENE_JellyBreeder.ENE_JellyBreeder_C
// Size: 0x68c (Inherited: 0x510)
struct AENE_JellyBreeder_C : AJellyBreeder {
	FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	UCapsuleComponent* Capsule; // 0x518(0x08)
	UWeakpointGlowComponent* WeakpointGlow; // 0x520(0x08)
	UAudioComponent* JellyBreederDeath_Cue; // 0x528(0x08)
	UAudioComponent* JellyBreederIdle_Cue; // 0x530(0x08)
	UImpactComponent* Impact; // 0x538(0x08)
	UPhysicalAnimationComponent* PhysicalAnimation; // 0x540(0x08)
	TArray<FName> BoneNames; // 0x548(0x10)
	FName Profile; // 0x558(0x08)
	FVector Location; // 0x560(0x0c)
	float Emission Multiplier; // 0x56c(0x04)
	float EmissionFlash; // 0x570(0x04)
	FRuntimeFloatCurve EmissionGrow; // 0x578(0x88)
	FRuntimeFloatCurve EmissionFade; // 0x600(0x88)
	int32_t EmissionID; // 0x688(0x04)

	void ToggleBonePhysics(bool BonePhysics);
	void ReceiveBeginPlay();
	void StartFizzle();
	void OnMessageAI(FName TriggerName);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__Impact_K2Node_ComponentBoundEvent_5_ImpactedSignature__DelegateSignature();
	void BreedModeFlipped(bool aIsLayingEggs);
	void ExecuteUbergraph_ENE_JellyBreeder(int32_t EntryPoint);
};

