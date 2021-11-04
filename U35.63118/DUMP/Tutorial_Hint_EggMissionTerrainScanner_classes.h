// BlueprintGeneratedClass Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C
// Size: 0x18c (Inherited: 0x170)
struct UTutorial_Hint_EggMissionTerrainScanner_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float First Time Delay; // 0x178(0x04)
	UObjective* Target Objective; // 0x180(0x08)
	float AfterUseDelay; // 0x188(0x04)

	void ReceiveOnInitialized();
	void OnToggleMapTool_Event(bool Visible);
	void Mark Ready();
	void ReceiveOnHidden();
	void ExecuteUbergraph_Tutorial_Hint_EggMissionTerrainScanner(int32_t EntryPoint);
};

