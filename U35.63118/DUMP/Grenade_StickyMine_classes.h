// BlueprintGeneratedClass Grenade_StickyMine.Grenade_StickyMine_C
// Size: 0x3dd (Inherited: 0x314)
struct AGrenade_StickyMine_C : AITM_Grenade_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	USphereComponent* UseSphere; // 0x320(0x08)
	USingleUsableComponent* SingleUsable; // 0x328(0x08)
	USkeletalMeshComponent* SM_MineGround; // 0x330(0x08)
	UStaticMeshComponent* TriggerAreaDisplay; // 0x338(0x08)
	UExplosionComponent* Explosion; // 0x340(0x08)
	UDamageComponent* Damage; // 0x348(0x08)
	USphereComponent* Sphere; // 0x350(0x08)
	float RingPulse_Scale_1486413F4ABF9550B6797DBA3F0A55DB; // 0x358(0x04)
	enum class ETimelineDirection RingPulse__Direction_1486413F4ABF9550B6797DBA3F0A55DB; // 0x35c(0x01)
	UTimelineComponent* RingPulse; // 0x360(0x08)
	bool Triggered; // 0x368(0x01)
	float ArmingDelay; // 0x36c(0x04)
	bool Armed; // 0x370(0x01)
	USoundCue* ExplosionSound; // 0x378(0x08)
	UParticleSystem* ExplosionParticles; // 0x380(0x08)
	UMaterialInstanceDynamic* TriggerAreaDynamicMat; // 0x388(0x08)
	FLinearColor TriggerAreaColor; // 0x390(0x10)
	bool Exploded; // 0x3a0(0x01)
	UMaterialInterface* Not Blinking Dynamic Material; // 0x3a8(0x08)
	int32_t MaxExplosions; // 0x3b0(0x04)
	int32_t ExplosionCount; // 0x3b4(0x04)
	bool Over; // 0x3b8(0x01)
	UMaterialInstanceDynamic* GrenadeLightsDynamicMat; // 0x3c0(0x08)
	FLinearColor TriggeredLightsColour; // 0x3c8(0x10)
	float LifespanAfterFirstTrigger; // 0x3d8(0x04)
	bool Dead; // 0x3dc(0x01)

	void OnRep_Dead();
	void AddGearStateEntries(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void OnRep_Armed();
	void OnRep_Triggered();
	void UserConstructionScript();
	void RingPulse__FinishedFunc();
	void RingPulse__UpdateFunc();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void TriggerExplosion();
	void GetArmed();
	void DoTriggerAreaPulse();
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void DisarmMine(AThrownGrenadeItem* ThrownGrenadeItem);
	void KillMine();
	void ExplodeLast();
	void ExecuteUbergraph_Grenade_StickyMine(int32_t EntryPoint);
};

