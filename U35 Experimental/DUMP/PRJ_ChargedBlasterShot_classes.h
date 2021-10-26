// BlueprintGeneratedClass PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C
// Size: 0x3c1 (Inherited: 0x340)
struct APRJ_ChargedBlasterShot_C : AChargedProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	UDamageComponent* TCFDamage; // 0x348(0x08)
	UAudioComponent* Audio; // 0x350(0x08)
	USphereComponent* AoEDamageSphere; // 0x358(0x08)
	UParticleSystemComponent* P_Charged_Shot_Warmup; // 0x360(0x08)
	UParticleSystemComponent* P_Charged_Shot; // 0x368(0x08)
	UPointLightComponent* PointLight; // 0x370(0x08)
	UStaticMeshComponent* StaticMesh; // 0x378(0x08)
	USceneComponent* AnimNode; // 0x380(0x08)
	UDamageComponent* Damage; // 0x388(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x390(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x398(0x08)
	float Grow_Time_Line_Scale_70B952944B635ADB4B7086A2A6BEB7D9; // 0x3a0(0x04)
	enum class ETimelineDirection Grow_Time_Line__Direction_70B952944B635ADB4B7086A2A6BEB7D9; // 0x3a4(0x01)
	UTimelineComponent* Grow Time Line; // 0x3a8(0x08)
	float DamageRadiusAtOverCharge; // 0x3b0(0x04)
	float Acceleration; // 0x3b4(0x04)
	UParticleSystemComponent* AoEParticle; // 0x3b8(0x08)
	bool FlyingNightmareEnabled; // 0x3c0(0x01)

	void OnRep_AoEEnabled();
	void UserConstructionScript();
	void Grow Time Line__FinishedFunc();
	void Grow Time Line__UpdateFunc();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnAoEDamageEnabled();
	void UpdateFNRadius(float New Radius);
	void OnInitialized();
	void ExecuteUbergraph_PRJ_ChargedBlasterShot(int32_t EntryPoint);
};

