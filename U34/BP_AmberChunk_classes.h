// BlueprintGeneratedClass BP_AmberChunk.BP_AmberChunk_C
// Size: 0x398 (Inherited: 0x321)
struct ABP_AmberChunk_C : ABP_Gem_C {
	char UnknownData_321[0x7]; // 0x321(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPointLightComponent* PointLight; // 0x330(0x08)
	struct FTimerHandle TimerHandle; // 0x338(0x08)
	float LifeTime; // 0x340(0x04)
	bool Destroyed; // 0x344(0x01)
	char UnknownData_345[0x3]; // 0x345(0x03)
	struct UMaterialInstanceDynamic* Dynamic Material; // 0x348(0x08)
	struct FLinearColor Initial Colour; // 0x350(0x10)
	struct FLinearColor Final Colour; // 0x360(0x10)
	float ProgressFrequency; // 0x370(0x04)
	float TimeElapsed; // 0x374(0x04)
	struct FLinearColor Initial Color Tint1; // 0x378(0x10)
	struct FLinearColor Final Color Tint1; // 0x388(0x10)

	void OnRep_Destroyed(); // Function BP_AmberChunk.BP_AmberChunk_C.OnRep_Destroyed
	void UserConstructionScript(); // Function BP_AmberChunk.BP_AmberChunk_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_AmberChunk.BP_AmberChunk_C.ReceiveBeginPlay
	void DestroySelf(); // Function BP_AmberChunk.BP_AmberChunk_C.DestroySelf
	void Time(); // Function BP_AmberChunk.BP_AmberChunk_C.Time
	void ExecuteUbergraph_BP_AmberChunk(int32_t EntryPoint); // Function BP_AmberChunk.BP_AmberChunk_C.ExecuteUbergraph_BP_AmberChunk
};

