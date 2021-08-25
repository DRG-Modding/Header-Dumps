// BlueprintGeneratedClass ENE_JellyBreeder.ENE_JellyBreeder_C
// Size: 0x68c (Inherited: 0x510)
struct AENE_JellyBreeder_C : AJellyBreeder {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct UCapsuleComponent* Capsule; // 0x518(0x08)
	struct UWeakpointGlowComponent* WeakpointGlow; // 0x520(0x08)
	struct UAudioComponent* JellyBreederDeath_Cue; // 0x528(0x08)
	struct UAudioComponent* JellyBreederIdle_Cue; // 0x530(0x08)
	struct UImpactComponent* Impact; // 0x538(0x08)
	struct UPhysicalAnimationComponent* PhysicalAnimation; // 0x540(0x08)
	struct TArray<struct FName> BoneNames; // 0x548(0x10)
	struct FName Profile; // 0x558(0x08)
	struct FVector Location; // 0x560(0x0c)
	float Emission Multiplier; // 0x56c(0x04)
	float EmissionFlash; // 0x570(0x04)
	char UnknownData_574[0x4]; // 0x574(0x04)
	struct FRuntimeFloatCurve EmissionGrow; // 0x578(0x88)
	struct FRuntimeFloatCurve EmissionFade; // 0x600(0x88)
	int32_t EmissionID; // 0x688(0x04)

	void ToggleBonePhysics(bool BonePhysics); // Function ENE_JellyBreeder.ENE_JellyBreeder_C.ToggleBonePhysics
	void ReceiveBeginPlay(); // Function ENE_JellyBreeder.ENE_JellyBreeder_C.ReceiveBeginPlay
	void StartFizzle(); // Function ENE_JellyBreeder.ENE_JellyBreeder_C.StartFizzle
	void OnMessageAI(struct FName TriggerName); // Function ENE_JellyBreeder.ENE_JellyBreeder_C.OnMessageAI
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_JellyBreeder.ENE_JellyBreeder_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature
	void BndEvt__Impact_K2Node_ComponentBoundEvent_5_ImpactedSignature__DelegateSignature(); // Function ENE_JellyBreeder.ENE_JellyBreeder_C.BndEvt__Impact_K2Node_ComponentBoundEvent_5_ImpactedSignature__DelegateSignature
	void BreedModeFlipped(bool aIsLayingEggs); // Function ENE_JellyBreeder.ENE_JellyBreeder_C.BreedModeFlipped
	void ExecuteUbergraph_ENE_JellyBreeder(int32_t EntryPoint); // Function ENE_JellyBreeder.ENE_JellyBreeder_C.ExecuteUbergraph_ENE_JellyBreeder
};

