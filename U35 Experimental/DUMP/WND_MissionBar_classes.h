// WidgetBlueprintGeneratedClass WND_MissionBar.WND_MissionBar_C
// Size: 0x240 (Inherited: 0x230)
struct UWND_MissionBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UCanvasPanel* CanvasRoot; // 0x238(0x08)

	void SetMissionType(bool IsSingleMission);
	void SetGeneratedMission(UGeneratedMission* InMission);
	void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WND_MissionBar(int32_t EntryPoint);
};

