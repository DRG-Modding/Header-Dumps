// BlueprintGeneratedClass BP_RotatingSpotlight01.BP_RotatingSpotlight01_C
// Size: 0x278 (Inherited: 0x264)
struct ABP_RotatingSpotlight01_C : ABP_RadarDish01_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	USpotLightComponent* SpotLight; // 0x270(0x08)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_RotatingSpotlight01(int32_t EntryPoint);
};

