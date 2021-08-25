// BlueprintGeneratedClass Grenade_StickyMine.Grenade_StickyMine_C
// Size: 0x3dd (Inherited: 0x314)
struct AGrenade_StickyMine_C : AITM_Grenade_Base_C {
	char UnknownData_314[0x4]; // 0x314(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USphereComponent* UseSphere; // 0x320(0x08)
	struct USingleUsableComponent* SingleUsable; // 0x328(0x08)
	struct USkeletalMeshComponent* SM_MineGround; // 0x330(0x08)
	struct UStaticMeshComponent* TriggerAreaDisplay; // 0x338(0x08)
	struct UExplosionComponent* Explosion; // 0x340(0x08)
	struct UDamageComponent* Damage; // 0x348(0x08)
	struct USphereComponent* Sphere; // 0x350(0x08)
	float RingPulse_Scale_1486413F4ABF9550B6797DBA3F0A55DB; // 0x358(0x04)
	char RingPulse__Direction_1486413F4ABF9550B6797DBA3F0A55DB; // 0x35c(0x01)
	char UnknownData_35D[0x3]; // 0x35d(0x03)
	struct UTimelineComponent* RingPulse; // 0x360(0x08)
	bool Triggered; // 0x368(0x01)
	char UnknownData_369[0x3]; // 0x369(0x03)
	float ArmingDelay; // 0x36c(0x04)
	bool Armed; // 0x370(0x01)
	char UnknownData_371[0x7]; // 0x371(0x07)
	struct USoundCue* ExplosionSound; // 0x378(0x08)
	struct UParticleSystem* ExplosionParticles; // 0x380(0x08)
	struct UMaterialInstanceDynamic* TriggerAreaDynamicMat; // 0x388(0x08)
	struct FLinearColor TriggerAreaColor; // 0x390(0x10)
	bool Exploded; // 0x3a0(0x01)
	char UnknownData_3A1[0x7]; // 0x3a1(0x07)
	struct UMaterialInterface* Not Blinking Dynamic Material; // 0x3a8(0x08)
	int32_t MaxExplosions; // 0x3b0(0x04)
	int32_t ExplosionCount; // 0x3b4(0x04)
	bool Over; // 0x3b8(0x01)
	char UnknownData_3B9[0x7]; // 0x3b9(0x07)
	struct UMaterialInstanceDynamic* GrenadeLightsDynamicMat; // 0x3c0(0x08)
	struct FLinearColor TriggeredLightsColour; // 0x3c8(0x10)
	float LifespanAfterFirstTrigger; // 0x3d8(0x04)
	bool Dead; // 0x3dc(0x01)

	void OnRep_Dead(); // Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Dead
	void AddGearStateEntries(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function Grenade_StickyMine.Grenade_StickyMine_C.AddGearStateEntries
	void OnRep_Armed(); // Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Armed
	void OnRep_Triggered(); // Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Triggered
	void UserConstructionScript(); // Function Grenade_StickyMine.Grenade_StickyMine_C.UserConstructionScript
	void RingPulse__FinishedFunc(); // Function Grenade_StickyMine.Grenade_StickyMine_C.RingPulse__FinishedFunc
	void RingPulse__UpdateFunc(); // Function Grenade_StickyMine.Grenade_StickyMine_C.RingPulse__UpdateFunc
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	void TriggerExplosion(); // Function Grenade_StickyMine.Grenade_StickyMine_C.TriggerExplosion
	void GetArmed(); // Function Grenade_StickyMine.Grenade_StickyMine_C.GetArmed
	void DoTriggerAreaPulse(); // Function Grenade_StickyMine.Grenade_StickyMine_C.DoTriggerAreaPulse
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	void DisarmMine(struct AThrownGrenadeItem* ThrownGrenadeItem); // Function Grenade_StickyMine.Grenade_StickyMine_C.DisarmMine
	void KillMine(); // Function Grenade_StickyMine.Grenade_StickyMine_C.KillMine
	void ExplodeLast(); // Function Grenade_StickyMine.Grenade_StickyMine_C.ExplodeLast
	void ExecuteUbergraph_Grenade_StickyMine(int32_t EntryPoint); // Function Grenade_StickyMine.Grenade_StickyMine_C.ExecuteUbergraph_Grenade_StickyMine
};

