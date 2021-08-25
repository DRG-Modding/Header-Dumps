// BlueprintGeneratedClass Bp_Azure_GurkenShuck.Bp_Azure_GurkenShuck_C
// Size: 0x2a8 (Inherited: 0x220)
struct ABp_Azure_GurkenShuck_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x228(0x08)
	struct UParticleSystemComponent* P_Flower_Gurken_Pollen; // 0x230(0x08)
	struct USphereComponent* WalkinTrigger; // 0x238(0x08)
	struct UCapsuleComponent* HitBox; // 0x240(0x08)
	struct USkeletalMeshComponent* SK_Biome_AzureWeald_Flower_Gurken; // 0x248(0x08)
	struct UAudioComponent* AzureGurkenIdleSound; // 0x250(0x08)
	struct UParticleSystemComponent* P_Flower_HollowBall_lightdust; // 0x258(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x260(0x08)
	struct UPointLightComponent* PointLight; // 0x268(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x270(0x08)
	struct USceneComponent* Scene; // 0x278(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x280(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x288(0x08)
	float Fade_up_NewTrack_0_1973A28E419F187C363458893321988E; // 0x290(0x04)
	char Fade_up__Direction_1973A28E419F187C363458893321988E; // 0x294(0x01)
	char UnknownData_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* Fade up; // 0x298(0x08)
	int32_t LightIntensity; // 0x2a0(0x04)
	int32_t LightAttenuation; // 0x2a4(0x04)

	void Fade up__FinishedFunc(); // Function Bp_Azure_GurkenShuck.Bp_Azure_GurkenShuck_C.Fade up__FinishedFunc
	void Fade up__UpdateFunc(); // Function Bp_Azure_GurkenShuck.Bp_Azure_GurkenShuck_C.Fade up__UpdateFunc
	void ReceiveBeginPlay(); // Function Bp_Azure_GurkenShuck.Bp_Azure_GurkenShuck_C.ReceiveBeginPlay
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function Bp_Azure_GurkenShuck.Bp_Azure_GurkenShuck_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Bp_Azure_GurkenShuck.Bp_Azure_GurkenShuck_C.BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	void Close Flower(); // Function Bp_Azure_GurkenShuck.Bp_Azure_GurkenShuck_C.Close Flower
	void OpenFlower(); // Function Bp_Azure_GurkenShuck.Bp_Azure_GurkenShuck_C.OpenFlower
	void ExecuteUbergraph_Bp_Azure_GurkenShuck(int32_t EntryPoint); // Function Bp_Azure_GurkenShuck.Bp_Azure_GurkenShuck_C.ExecuteUbergraph_Bp_Azure_GurkenShuck
};

