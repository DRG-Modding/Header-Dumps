// BlueprintGeneratedClass BP_UnknownArtifact.BP_UnknownArtifact_C
// Size: 0x394 (Inherited: 0x321)
struct ABP_UnknownArtifact_C : ABP_Gem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	UOutlineComponent* outline; // 0x330(0x08)
	UPointLightComponent* PointLight6; // 0x338(0x08)
	UPointLightComponent* PointLight5; // 0x340(0x08)
	UPointLightComponent* PointLight4; // 0x348(0x08)
	UPointLightComponent* PointLight3; // 0x350(0x08)
	UPointLightComponent* PointLight2; // 0x358(0x08)
	UPointLightComponent* PointLight1; // 0x360(0x08)
	UPointLightComponent* light_center; // 0x368(0x08)
	float Timeline_0_NewTrack_0_26F6B6C743C5284D0A49D79127722B1A; // 0x370(0x04)
	enum class ETimelineDirection Timeline_0__Direction_26F6B6C743C5284D0A49D79127722B1A; // 0x374(0x01)
	UTimelineComponent* Timeline_1; // 0x378(0x08)
	float LightIntensity; // 0x380(0x04)
	FLinearColor LightColor; // 0x384(0x10)

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void All_PlayDugFree();
	void ExecuteUbergraph_BP_UnknownArtifact(int32_t EntryPoint);
};

