// BlueprintGeneratedClass BP_Gem_Bittergem.BP_Gem_Bittergem_C
// Size: 0x378 (Inherited: 0x321)
struct ABP_Gem_Bittergem_C : ABP_Gem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	UAudioComponent* GemBitterIdle_Cue; // 0x330(0x08)
	UGemTracker* GemTracker; // 0x338(0x08)
	UPointLightComponent* PointLight6; // 0x340(0x08)
	UPointLightComponent* PointLight5; // 0x348(0x08)
	UPointLightComponent* PointLight4; // 0x350(0x08)
	UPointLightComponent* PointLight3; // 0x358(0x08)
	UPointLightComponent* PointLight2; // 0x360(0x08)
	UPointLightComponent* PointLight1; // 0x368(0x08)
	UPointLightComponent* PointLight; // 0x370(0x08)

	void All_PlayDugFree();
	void Receive_OnDeposited(APlayerCharacter* fromPlayer);
	void ExecuteUbergraph_BP_Gem_Bittergem(int32_t EntryPoint);
};

