// BlueprintGeneratedClass BP_BRT_Bomb.BP_BRT_Bomb_C
// Size: 0x28c (Inherited: 0x220)
struct ABP_BRT_Bomb_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UPointLightComponent* PointLight; // 0x228(0x08)
	struct UExplosionComponent* Explosion; // 0x230(0x08)
	struct USphereComponent* Area Trigger; // 0x238(0x08)
	struct UDamageComponent* Damage; // 0x240(0x08)
	struct UStaticMeshComponent* Sphere; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	bool Triggered; // 0x258(0x01)
	bool Exploded; // 0x259(0x01)
	char UnknownData_25A[0x6]; // 0x25a(0x06)
	struct USoundCue* ExplosionSound; // 0x260(0x08)
	struct UParticleSystem* ExplosionParticles; // 0x268(0x08)
	struct USoundMix* ExplosionMixModifier; // 0x270(0x08)
	float ExplosionDuckMinDistance; // 0x278(0x04)
	float ExplosionDuckMaxDistance; // 0x27c(0x04)
	float ExplosionDuckingTime; // 0x280(0x04)
	bool ready; // 0x284(0x01)
	char UnknownData_285[0x3]; // 0x285(0x03)
	float ArmingDelay; // 0x288(0x04)

	void OnRep_Ready(); // Function BP_BRT_Bomb.BP_BRT_Bomb_C.OnRep_Ready
	void OnRep_Triggered(); // Function BP_BRT_Bomb.BP_BRT_Bomb_C.OnRep_Triggered
	void UserConstructionScript(); // Function BP_BRT_Bomb.BP_BRT_Bomb_C.UserConstructionScript
	void TriggerExplosion(); // Function BP_BRT_Bomb.BP_BRT_Bomb_C.TriggerExplosion
	void GetArmed(); // Function BP_BRT_Bomb.BP_BRT_Bomb_C.GetArmed
	void BndEvt__Area Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_BRT_Bomb.BP_BRT_Bomb_C.BndEvt__Area Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_BRT_Bomb.BP_BRT_Bomb_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_BRT_Bomb(int32_t EntryPoint); // Function BP_BRT_Bomb.BP_BRT_Bomb_C.ExecuteUbergraph_BP_BRT_Bomb
};

