// BlueprintGeneratedClass BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_PlasmaTrail_LineCutter_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x228(0x08)
	UCapsuleComponent* Capsule; // 0x230(0x08)
	UStatusEffectTriggerComponent* StatusEffectTrigger; // 0x238(0x08)
	USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void ReceiveBeginPlay();
	void SetLineWidth(float Width);
	void ExecuteUbergraph_BP_PlasmaTrail_LineCutter(int32_t EntryPoint);
};

