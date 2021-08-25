// BlueprintGeneratedClass BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C
// Size: 0x29c (Inherited: 0x264)
struct ABP_MiniNuke_RadiationCloud_C : ABP_Damage_Cloud_Base_C {
	char UnknownData_264[0x4]; // 0x264(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x270(0x08)
	struct UAudioComponent* RadiationSound; // 0x278(0x08)
	struct UPointLightComponent* PointLight; // 0x280(0x08)
	float Timeline_0_Brightness_3A67B370490B2F862C2D6E9E451100CB; // 0x288(0x04)
	char Timeline_0__Direction_3A67B370490B2F862C2D6E9E451100CB; // 0x28c(0x01)
	char UnknownData_28D[0x3]; // 0x28d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x290(0x08)
	float BaseIntensity; // 0x298(0x04)

	void Timeline_0__FinishedFunc(); // Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.Timeline_0__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_MiniNuke_RadiationCloud(int32_t EntryPoint); // Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.ExecuteUbergraph_BP_MiniNuke_RadiationCloud
};

