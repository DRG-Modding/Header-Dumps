// BlueprintGeneratedClass BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_PlasmaTrail_LineCutter_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x228(0x08)
	struct UCapsuleComponent* Capsule; // 0x230(0x08)
	struct UStatusEffectTriggerComponent* StatusEffectTrigger; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void ReceiveBeginPlay(); // Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.ReceiveBeginPlay
	void SetLineWidth(float Width); // Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.SetLineWidth
	void ExecuteUbergraph_BP_PlasmaTrail_LineCutter(int32_t EntryPoint); // Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.ExecuteUbergraph_BP_PlasmaTrail_LineCutter
};

