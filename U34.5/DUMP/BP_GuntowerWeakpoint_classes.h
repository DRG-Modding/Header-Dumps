// BlueprintGeneratedClass BP_GuntowerWeakpoint.BP_GuntowerWeakpoint_C
// Size: 0x368 (Inherited: 0x330)
struct ABP_GuntowerWeakpoint_C : AGuntowerWeakPoint {
	FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	UPawnAfflictionComponent* PawnAffliction; // 0x338(0x08)
	UPointLightComponent* PointLight; // 0x340(0x08)
	UCapsuleComponent* ProjectileCollision'; // 0x348(0x08)
	UOutlineComponent* outline; // 0x350(0x08)
	UEnemyComponent* enemy; // 0x358(0x08)
	UPawnStatsComponent* PawnStats; // 0x360(0x08)

	FVector GetTargetCenterMass();
	void ReceiveBeginPlay();
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnExposedChanged(bool isExposed);
	void ExecuteUbergraph_BP_GuntowerWeakpoint(int32_t EntryPoint);
};

