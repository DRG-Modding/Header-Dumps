// WidgetBlueprintGeneratedClass ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C
// Size: 0x250 (Inherited: 0x230)
struct UITM_MisSel_FullBiome_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UOverlay* Overlay_1; // 0x238(0x08)
	UBiome* Biome; // 0x240(0x08)
	UITM_MisSel_BiomeBase_C* BiomeMapWidget; // 0x248(0x08)

	void UpdateMapPan(FVector2D InPosition);
	void GetRandomFreeMissionSlot(UITM_MisSel_MissionMapIcon_C* Output);
	void ClearMissions();
	void GetAllAllMissionSlots(TArray<UITM_MisSel_MissionMapIcon_C*> Items1);
	void Construct();
	void SetData(TArray<UGeneratedMission*> missions, UBiome* Biome);
	void BndEvt__Button_BG_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_MisSel_FullBiome(int32_t EntryPoint);
};

