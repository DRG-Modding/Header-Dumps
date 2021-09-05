// BlueprintGeneratedClass BP_AmberChunk.BP_AmberChunk_C
// Size: 0x398 (Inherited: 0x321)
struct ABP_AmberChunk_C : ABP_Gem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	UPointLightComponent* PointLight; // 0x330(0x08)
	FTimerHandle TimerHandle; // 0x338(0x08)
	float LifeTime; // 0x340(0x04)
	bool Destroyed; // 0x344(0x01)
	UMaterialInstanceDynamic* Dynamic Material; // 0x348(0x08)
	FLinearColor Initial Colour; // 0x350(0x10)
	FLinearColor Final Colour; // 0x360(0x10)
	float ProgressFrequency; // 0x370(0x04)
	float TimeElapsed; // 0x374(0x04)
	FLinearColor Initial Color Tint1; // 0x378(0x10)
	FLinearColor Final Color Tint1; // 0x388(0x10)

	void OnRep_Destroyed();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void DestroySelf();
	void Time();
	void ExecuteUbergraph_BP_AmberChunk(int32_t EntryPoint);
};

