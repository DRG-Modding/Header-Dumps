// BlueprintGeneratedClass BP_Zhukov_IceMines.BP_Zhukov_IceMines_C
// Size: 0x28c (Inherited: 0x220)
struct ABP_Zhukov_IceMines_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UPointLightComponent* PointLight; // 0x228(0x08)
	UExplosionComponent* Explosion; // 0x230(0x08)
	USphereComponent* Area Trigger; // 0x238(0x08)
	UDamageComponent* Damage; // 0x240(0x08)
	UStaticMeshComponent* Sphere; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	bool Triggered; // 0x258(0x01)
	bool Exploded; // 0x259(0x01)
	USoundCue* ExplosionSound; // 0x260(0x08)
	UParticleSystem* ExplosionParticles; // 0x268(0x08)
	USoundMix* ExplosionMixModifier; // 0x270(0x08)
	float ExplosionDuckMinDistance; // 0x278(0x04)
	float ExplosionDuckMaxDistance; // 0x27c(0x04)
	float ExplosionDuckingTime; // 0x280(0x04)
	bool ready; // 0x284(0x01)
	float ArmingDelay; // 0x288(0x04)

	void OnRep_Ready();
	void OnRep_Triggered();
	void UserConstructionScript();
	void TriggerExplosion();
	void GetArmed();
	void BndEvt__Area Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Zhukov_IceMines(int32_t EntryPoint);
};

