// BlueprintGeneratedClass BP_RadioactiveGlowinggGreenCrystal_Hazard.BP_RadioactiveGlowinggGreenCrystal_Hazard_C
// Size: 0x2b8 (Inherited: 0x264)
struct ABP_RadioactiveGlowinggGreenCrystal_Hazard_C : ABP_GlowingBlueCrystal_Base_C {
	char UnknownData_264[0x4]; // 0x264(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UStatusEffectTriggerComponent* StatusEffectTrigger; // 0x270(0x08)
	struct UAudioComponent* Audio; // 0x278(0x08)
	struct UParticleSystemComponent* Particles; // 0x280(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x288(0x08)
	struct USphereComponent* Sphere; // 0x290(0x08)
	float DamageGlowPulse_LightIntensity_72DD5E2D4AA96604D90633953576BD0B; // 0x298(0x04)
	char DamageGlowPulse__Direction_72DD5E2D4AA96604D90633953576BD0B; // 0x29c(0x01)
	char UnknownData_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* DamageGlowPulse; // 0x2a0(0x08)
	bool DoPulse; // 0x2a8(0x01)
	char UnknownData_2A9[0x3]; // 0x2a9(0x03)
	float LightIntensityBase; // 0x2ac(0x04)
	float LightIntensityIncrease; // 0x2b0(0x04)
	int32_t ActorCount; // 0x2b4(0x04)

	void OnRep_DoPulse(); // Function BP_RadioactiveGlowinggGreenCrystal_Hazard.BP_RadioactiveGlowinggGreenCrystal_Hazard_C.OnRep_DoPulse
	void CanApplyEffect(struct UStatusEffect* effect, bool Result); // Function BP_RadioactiveGlowinggGreenCrystal_Hazard.BP_RadioactiveGlowinggGreenCrystal_Hazard_C.CanApplyEffect
	void UserConstructionScript(); // Function BP_RadioactiveGlowinggGreenCrystal_Hazard.BP_RadioactiveGlowinggGreenCrystal_Hazard_C.UserConstructionScript
	void DamageGlowPulse__FinishedFunc(); // Function BP_RadioactiveGlowinggGreenCrystal_Hazard.BP_RadioactiveGlowinggGreenCrystal_Hazard_C.DamageGlowPulse__FinishedFunc
	void DamageGlowPulse__UpdateFunc(); // Function BP_RadioactiveGlowinggGreenCrystal_Hazard.BP_RadioactiveGlowinggGreenCrystal_Hazard_C.DamageGlowPulse__UpdateFunc
	void BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature(struct AActor* TargetActor, bool entered); // Function BP_RadioactiveGlowinggGreenCrystal_Hazard.BP_RadioactiveGlowinggGreenCrystal_Hazard_C.BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature
	void StartGlow(); // Function BP_RadioactiveGlowinggGreenCrystal_Hazard.BP_RadioactiveGlowinggGreenCrystal_Hazard_C.StartGlow
	void StopGlow(); // Function BP_RadioactiveGlowinggGreenCrystal_Hazard.BP_RadioactiveGlowinggGreenCrystal_Hazard_C.StopGlow
	void ExecuteUbergraph_BP_RadioactiveGlowinggGreenCrystal_Hazard(int32_t EntryPoint); // Function BP_RadioactiveGlowinggGreenCrystal_Hazard.BP_RadioactiveGlowinggGreenCrystal_Hazard_C.ExecuteUbergraph_BP_RadioactiveGlowinggGreenCrystal_Hazard
};

