// BlueprintGeneratedClass BP_AlienEgg.BP_AlienEgg_C
// Size: 0x39d (Inherited: 0x321)
struct ABP_AlienEgg_C : ABP_Gem_C {
	char UnknownData_321[0x7]; // 0x321(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UStaticMeshComponent* SurroundingTerrainCarver; // 0x330(0x08)
	struct UOutlineComponent* outline; // 0x338(0x08)
	struct UPointLightComponent* PointLight6; // 0x340(0x08)
	struct UPointLightComponent* PointLight5; // 0x348(0x08)
	struct UPointLightComponent* PointLight4; // 0x350(0x08)
	struct UPointLightComponent* PointLight3; // 0x358(0x08)
	struct UPointLightComponent* PointLight2; // 0x360(0x08)
	struct UPointLightComponent* PointLight1; // 0x368(0x08)
	struct UPointLightComponent* light_center; // 0x370(0x08)
	float Timeline_0_NewTrack_0_824C546F43F8F98270303087668A3695; // 0x378(0x04)
	char Timeline_0__Direction_824C546F43F8F98270303087668A3695; // 0x37c(0x01)
	char UnknownData_37D[0x3]; // 0x37d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x380(0x08)
	float LightIntensity; // 0x388(0x04)
	struct FLinearColor LightColor; // 0x38c(0x10)
	bool IsSpecialEgg; // 0x39c(0x01)

	void ModulateLights(float NewIntensity); // Function BP_AlienEgg.BP_AlienEgg_C.ModulateLights
	void Timeline_0__FinishedFunc(); // Function BP_AlienEgg.BP_AlienEgg_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_AlienEgg.BP_AlienEgg_C.Timeline_0__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_AlienEgg.BP_AlienEgg_C.ReceiveBeginPlay
	void All_PlayDugFree(); // Function BP_AlienEgg.BP_AlienEgg_C.All_PlayDugFree
	void SetSpecialEgg(); // Function BP_AlienEgg.BP_AlienEgg_C.SetSpecialEgg
	void ExecuteUbergraph_BP_AlienEgg(int32_t EntryPoint); // Function BP_AlienEgg.BP_AlienEgg_C.ExecuteUbergraph_BP_AlienEgg
};

