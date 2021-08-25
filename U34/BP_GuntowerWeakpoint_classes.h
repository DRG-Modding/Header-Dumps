// BlueprintGeneratedClass BP_GuntowerWeakpoint.BP_GuntowerWeakpoint_C
// Size: 0x368 (Inherited: 0x330)
struct ABP_GuntowerWeakpoint_C : AGuntowerWeakPoint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UPawnAfflictionComponent* PawnAffliction; // 0x338(0x08)
	struct UPointLightComponent* PointLight; // 0x340(0x08)
	struct UCapsuleComponent* ProjectileCollision'; // 0x348(0x08)
	struct UOutlineComponent* outline; // 0x350(0x08)
	struct UEnemyComponent* enemy; // 0x358(0x08)
	struct UPawnStatsComponent* PawnStats; // 0x360(0x08)

	struct FVector GetTargetCenterMass(); // Function BP_GuntowerWeakpoint.BP_GuntowerWeakpoint_C.GetTargetCenterMass
	void ReceiveBeginPlay(); // Function BP_GuntowerWeakpoint.BP_GuntowerWeakpoint_C.ReceiveBeginPlay
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_GuntowerWeakpoint.BP_GuntowerWeakpoint_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void OnExposedChanged(bool isExposed); // Function BP_GuntowerWeakpoint.BP_GuntowerWeakpoint_C.OnExposedChanged
	void ExecuteUbergraph_BP_GuntowerWeakpoint(int32_t EntryPoint); // Function BP_GuntowerWeakpoint.BP_GuntowerWeakpoint_C.ExecuteUbergraph_BP_GuntowerWeakpoint
};

