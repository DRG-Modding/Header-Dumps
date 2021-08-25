// BlueprintGeneratedClass OBJ_1st_Salvage.OBJ_1st_Salvage_C
// Size: 0x248 (Inherited: 0x230)
struct UOBJ_1st_Salvage_C : USalvageObjective {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct FMulticastInlineDelegate OnAllActorsSalvaged; // 0x238(0x10)

	struct UTexture2D* GetInMissionCounterIcon(); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionCounterIcon
	struct FText GetInMissionCounterText(); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionCounterText
	struct FObjectiveMissionIcon GetMissionIcon(); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetMissionIcon
	int32_t GetObjectiveAmount(float missionLength); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveAmount
	struct FText GetInMissionText(); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionText
	struct FText GetObjectiveDescription(float missionLength); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveDescription
	struct UTexture2D* GetObjectiveIcon(); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveIcon
	void AllActorsSalvaged(); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.AllActorsSalvaged
	void ExecuteUbergraph_OBJ_1st_Salvage(int32_t EntryPoint); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.ExecuteUbergraph_OBJ_1st_Salvage
	void OnAllActorsSalvaged__DelegateSignature(); // Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.OnAllActorsSalvaged__DelegateSignature
};

