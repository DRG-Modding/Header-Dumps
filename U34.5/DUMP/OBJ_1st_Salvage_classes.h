// BlueprintGeneratedClass OBJ_1st_Salvage.OBJ_1st_Salvage_C
// Size: 0x248 (Inherited: 0x230)
struct UOBJ_1st_Salvage_C : USalvageObjective {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	FMulticastInlineDelegate OnAllActorsSalvaged; // 0x238(0x10)

	UTexture2D* GetInMissionCounterIcon();
	FText GetInMissionCounterText();
	FObjectiveMissionIcon GetMissionIcon();
	int32_t GetObjectiveAmount(float missionLength);
	FText GetInMissionText();
	FText GetObjectiveDescription(float missionLength);
	UTexture2D* GetObjectiveIcon();
	void AllActorsSalvaged();
	void ExecuteUbergraph_OBJ_1st_Salvage(int32_t EntryPoint);
	void OnAllActorsSalvaged__DelegateSignature();
};

