// BlueprintGeneratedClass BP_RotatingSpotlight01.BP_RotatingSpotlight01_C
// Size: 0x278 (Inherited: 0x264)
struct ABP_RotatingSpotlight01_C : ABP_RadarDish01_C {
	char UnknownData_264[0x4]; // 0x264(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USpotLightComponent* SpotLight; // 0x270(0x08)

	void ReceiveBeginPlay(); // Function BP_RotatingSpotlight01.BP_RotatingSpotlight01_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_RotatingSpotlight01(int32_t EntryPoint); // Function BP_RotatingSpotlight01.BP_RotatingSpotlight01_C.ExecuteUbergraph_BP_RotatingSpotlight01
};

