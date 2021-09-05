// BlueprintGeneratedClass BP_SpotLightInteractive.BP_SpotLightInteractive_C
// Size: 0x2bc (Inherited: 0x220)
struct ABP_SpotLightInteractive_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UPointLightComponent* PointLight; // 0x228(0x08)
	UPointLightComponent* PointLight1; // 0x230(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x238(0x08)
	UCapsuleComponent* Capsule; // 0x240(0x08)
	UStaticMeshComponent* SM_Minehead_Floodlight; // 0x248(0x08)
	UStaticMeshComponent* StaticMesh2; // 0x250(0x08)
	USpotLightComponent* SpotLight1; // 0x258(0x08)
	UStaticMeshComponent* StaticMesh4; // 0x260(0x08)
	USpotLightComponent* SpotLight; // 0x268(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x270(0x08)
	USceneComponent* SpotLightsBase; // 0x278(0x08)
	UAudioComponent* Audio; // 0x280(0x08)
	UOutlineComponent* outline; // 0x288(0x08)
	USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	float Timeline_1_0_1_Anim_A1CDCF1443534FDED095F0B3C5DBCF10; // 0x298(0x04)
	enum class ETimelineDirection Timeline_1__Direction_A1CDCF1443534FDED095F0B3C5DBCF10; // 0x29c(0x01)
	UTimelineComponent* Timeline_2; // 0x2a0(0x08)
	float Timeline_0_NewTrack_0_5573B4554C24184CF01708BDE578A95F; // 0x2a8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_5573B4554C24184CF01708BDE578A95F; // 0x2ac(0x01)
	UTimelineComponent* Timeline_1; // 0x2b0(0x08)
	float LightIntensity; // 0x2b8(0x04)

	void ConditionallyEnableShadows();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Activate();
	void ReceiveBeginPlay();
	void UpdateShadows();
	void ExecuteUbergraph_BP_SpotLightInteractive(int32_t EntryPoint);
};

