// WidgetBlueprintGeneratedClass ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C
// Size: 0x250 (Inherited: 0x230)
struct UITM_MisSel_FullBiome_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UOverlay* Overlay_1; // 0x238(0x08)
	struct UBiome* Biome; // 0x240(0x08)
	struct UITM_MisSel_BiomeBase_C* BiomeMapWidget; // 0x248(0x08)

	void UpdateMapPan(struct FVector2D InPosition); // Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.UpdateMapPan
	void GetRandomFreeMissionSlot(struct UITM_MisSel_MissionMapIcon_C* Output); // Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetRandomFreeMissionSlot
	void ClearMissions(); // Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ClearMissions
	void GetAllAllMissionSlots(struct TArray<struct UITM_MisSel_MissionMapIcon_C*> Items1); // Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetAllAllMissionSlots
	void Construct(); // Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.Construct
	void SetData(struct TArray<struct UGeneratedMission*> missions, struct UBiome* Biome); // Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.SetData
	void BndEvt__Button_BG_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature(); // Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.BndEvt__Button_BG_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_ITM_MisSel_FullBiome(int32_t EntryPoint); // Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ExecuteUbergraph_ITM_MisSel_FullBiome
};

