// BlueprintGeneratedClass BP_SpotLightInteractive.BP_SpotLightInteractive_C
// Size: 0x2bc (Inherited: 0x220)
struct ABP_SpotLightInteractive_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UPointLightComponent* PointLight; // 0x228(0x08)
	struct UPointLightComponent* PointLight1; // 0x230(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x238(0x08)
	struct UCapsuleComponent* Capsule; // 0x240(0x08)
	struct UStaticMeshComponent* SM_Minehead_Floodlight; // 0x248(0x08)
	struct UStaticMeshComponent* StaticMesh2; // 0x250(0x08)
	struct USpotLightComponent* SpotLight1; // 0x258(0x08)
	struct UStaticMeshComponent* StaticMesh4; // 0x260(0x08)
	struct USpotLightComponent* SpotLight; // 0x268(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x270(0x08)
	struct USceneComponent* SpotLightsBase; // 0x278(0x08)
	struct UAudioComponent* Audio; // 0x280(0x08)
	struct UOutlineComponent* outline; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	float Timeline_1_0_1_Anim_A1CDCF1443534FDED095F0B3C5DBCF10; // 0x298(0x04)
	char Timeline_1__Direction_A1CDCF1443534FDED095F0B3C5DBCF10; // 0x29c(0x01)
	char UnknownData_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2a0(0x08)
	float Timeline_0_NewTrack_0_5573B4554C24184CF01708BDE578A95F; // 0x2a8(0x04)
	char Timeline_0__Direction_5573B4554C24184CF01708BDE578A95F; // 0x2ac(0x01)
	char UnknownData_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2b0(0x08)
	float LightIntensity; // 0x2b8(0x04)

	void ConditionallyEnableShadows(); // Function BP_SpotLightInteractive.BP_SpotLightInteractive_C.ConditionallyEnableShadows
	void Timeline_0__FinishedFunc(); // Function BP_SpotLightInteractive.BP_SpotLightInteractive_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_SpotLightInteractive.BP_SpotLightInteractive_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_SpotLightInteractive.BP_SpotLightInteractive_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_SpotLightInteractive.BP_SpotLightInteractive_C.Timeline_1__UpdateFunc
	void Activate(); // Function BP_SpotLightInteractive.BP_SpotLightInteractive_C.Activate
	void ReceiveBeginPlay(); // Function BP_SpotLightInteractive.BP_SpotLightInteractive_C.ReceiveBeginPlay
	void UpdateShadows(); // Function BP_SpotLightInteractive.BP_SpotLightInteractive_C.UpdateShadows
	void ExecuteUbergraph_BP_SpotLightInteractive(int32_t EntryPoint); // Function BP_SpotLightInteractive.BP_SpotLightInteractive_C.ExecuteUbergraph_BP_SpotLightInteractive
};

