// BlueprintGeneratedClass Bp_Azure_GurkenShuck.Bp_Azure_GurkenShuck_C
// Size: 0x2a8 (Inherited: 0x220)
struct ABp_Azure_GurkenShuck_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x228(0x08)
	UParticleSystemComponent* P_Flower_Gurken_Pollen; // 0x230(0x08)
	USphereComponent* WalkinTrigger; // 0x238(0x08)
	UCapsuleComponent* HitBox; // 0x240(0x08)
	USkeletalMeshComponent* SK_Biome_AzureWeald_Flower_Gurken; // 0x248(0x08)
	UAudioComponent* AzureGurkenIdleSound; // 0x250(0x08)
	UParticleSystemComponent* P_Flower_HollowBall_lightdust; // 0x258(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x260(0x08)
	UPointLightComponent* PointLight; // 0x268(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x270(0x08)
	USceneComponent* Scene; // 0x278(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x280(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x288(0x08)
	float Fade_up_NewTrack_0_1973A28E419F187C363458893321988E; // 0x290(0x04)
	enum class ETimelineDirection Fade_up__Direction_1973A28E419F187C363458893321988E; // 0x294(0x01)
	UTimelineComponent* Fade up; // 0x298(0x08)
	int32_t LightIntensity; // 0x2a0(0x04)
	int32_t LightAttenuation; // 0x2a4(0x04)

	void Fade up__FinishedFunc();
	void Fade up__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Close Flower();
	void OpenFlower();
	void ExecuteUbergraph_Bp_Azure_GurkenShuck(int32_t EntryPoint);
};

