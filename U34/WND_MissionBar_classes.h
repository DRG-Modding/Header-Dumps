// WidgetBlueprintGeneratedClass WND_MissionBar.WND_MissionBar_C
// Size: 0x240 (Inherited: 0x230)
struct UWND_MissionBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UCanvasPanel* CanvasRoot; // 0x238(0x08)

	void SetMissionType(bool IsSingleMission); // Function WND_MissionBar.WND_MissionBar_C.SetMissionType
	void SetGeneratedMission(struct UGeneratedMission* InMission); // Function WND_MissionBar.WND_MissionBar_C.SetGeneratedMission
	void OnGeneratedMissionChanged(struct UGeneratedMission* OutGeneratedMission); // Function WND_MissionBar.WND_MissionBar_C.OnGeneratedMissionChanged
	void Construct(); // Function WND_MissionBar.WND_MissionBar_C.Construct
	void PreConstruct(bool IsDesignTime); // Function WND_MissionBar.WND_MissionBar_C.PreConstruct
	void ExecuteUbergraph_WND_MissionBar(int32_t EntryPoint); // Function WND_MissionBar.WND_MissionBar_C.ExecuteUbergraph_WND_MissionBar
};

