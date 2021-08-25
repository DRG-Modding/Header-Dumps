// BlueprintGeneratedClass BP_GlowingBlueCrystal_Base.BP_GlowingBlueCrystal_Base_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_GlowingBlueCrystal_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x228(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x230(0x08)
	struct UPointLightComponent* PointLight; // 0x238(0x08)
	struct ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float Timeline_0_LightIntensity_5C2F14DB41CC7BBBF75EB3A983726871; // 0x250(0x04)
	char Timeline_0__Direction_5C2F14DB41CC7BBBF75EB3A983726871; // 0x254(0x01)
	char UnknownData_255[0x3]; // 0x255(0x03)
	struct UTimelineComponent* Timeline_1; // 0x258(0x08)
	float IntialIntensity; // 0x260(0x04)

	void Timeline_0__FinishedFunc(); // Function BP_GlowingBlueCrystal_Base.BP_GlowingBlueCrystal_Base_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_GlowingBlueCrystal_Base.BP_GlowingBlueCrystal_Base_C.Timeline_0__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_GlowingBlueCrystal_Base.BP_GlowingBlueCrystal_Base_C.ReceiveBeginPlay
	void HeartDestroyed(); // Function BP_GlowingBlueCrystal_Base.BP_GlowingBlueCrystal_Base_C.HeartDestroyed
	void ExecuteUbergraph_BP_GlowingBlueCrystal_Base(int32_t EntryPoint); // Function BP_GlowingBlueCrystal_Base.BP_GlowingBlueCrystal_Base_C.ExecuteUbergraph_BP_GlowingBlueCrystal_Base
};

