// BlueprintGeneratedClass BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C
// Size: 0x29c (Inherited: 0x264)
struct ABP_MiniNuke_RadiationCloud_C : ABP_Damage_Cloud_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x270(0x08)
	UAudioComponent* RadiationSound; // 0x278(0x08)
	UPointLightComponent* PointLight; // 0x280(0x08)
	float Timeline_0_Brightness_3A67B370490B2F862C2D6E9E451100CB; // 0x288(0x04)
	enum class ETimelineDirection Timeline_0__Direction_3A67B370490B2F862C2D6E9E451100CB; // 0x28c(0x01)
	UTimelineComponent* Timeline_1; // 0x290(0x08)
	float BaseIntensity; // 0x298(0x04)

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MiniNuke_RadiationCloud(int32_t EntryPoint);
};

