// BlueprintGeneratedClass PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C
// Size: 0x379 (Inherited: 0x2f8)
struct APRJ_ChargedBlasterShot_C : AChargedProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UDamageComponent* TCFDamage; // 0x300(0x08)
	struct UAudioComponent* Audio; // 0x308(0x08)
	struct USphereComponent* AoEDamageSphere; // 0x310(0x08)
	struct UParticleSystemComponent* P_Charged_Shot_Warmup; // 0x318(0x08)
	struct UParticleSystemComponent* P_Charged_Shot; // 0x320(0x08)
	struct UPointLightComponent* PointLight; // 0x328(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x330(0x08)
	struct USceneComponent* AnimNode; // 0x338(0x08)
	struct UDamageComponent* Damage; // 0x340(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x348(0x08)
	struct UProjectileExplosion* ProjectileExplosion; // 0x350(0x08)
	float Grow_Time_Line_Scale_70B952944B635ADB4B7086A2A6BEB7D9; // 0x358(0x04)
	char Grow_Time_Line__Direction_70B952944B635ADB4B7086A2A6BEB7D9; // 0x35c(0x01)
	char UnknownData_35D[0x3]; // 0x35d(0x03)
	struct UTimelineComponent* Grow Time Line; // 0x360(0x08)
	float DamageRadiusAtOverCharge; // 0x368(0x04)
	float Acceleration; // 0x36c(0x04)
	struct UParticleSystemComponent* AoEParticle; // 0x370(0x08)
	bool FlyingNightmareEnabled; // 0x378(0x01)

	void OnRep_AoEEnabled(); // Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnRep_AoEEnabled
	void UserConstructionScript(); // Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.UserConstructionScript
	void Grow Time Line__FinishedFunc(); // Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.Grow Time Line__FinishedFunc
	void Grow Time Line__UpdateFunc(); // Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.Grow Time Line__UpdateFunc
	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnImpacted
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void OnAoEDamageEnabled(); // Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnAoEDamageEnabled
	void UpdateFNRadius(float New Radius); // Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.UpdateFNRadius
	void OnInitialized(); // Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnInitialized
	void ExecuteUbergraph_PRJ_ChargedBlasterShot(int32_t EntryPoint); // Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.ExecuteUbergraph_PRJ_ChargedBlasterShot
};

