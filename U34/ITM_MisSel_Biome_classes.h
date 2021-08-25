// WidgetBlueprintGeneratedClass ITM_MisSel_Biome.ITM_MisSel_Biome_C
// Size: 0x38c (Inherited: 0x230)
struct UITM_MisSel_Biome_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* NewZoneIntro; // 0x238(0x08)
	struct UWidgetAnimation* BiomeGlow_InActive; // 0x240(0x08)
	struct UWidgetAnimation* BiomeGlow; // 0x248(0x08)
	struct UWidgetAnimation* Infobox_MouseOver; // 0x250(0x08)
	struct UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x258(0x08)
	struct UCanvasPanel* CanvasPanel_Outer; // 0x260(0x08)
	struct UImage* IMG_Shadow; // 0x268(0x08)
	struct UITM_Campaign_Icon_C* ITM_Campaign_Icon; // 0x270(0x08)
	struct UButton* MainButton; // 0x278(0x08)
	struct UHorizontalBox* MissionsAvailiable; // 0x280(0x08)
	struct UTextBlock* NoMissionsAvailbable; // 0x288(0x08)
	struct UTextBlock* TextBlock_BiomeName; // 0x290(0x08)
	struct UBiome* Biome; // 0x298(0x08)
	struct FMulticastInlineDelegate BiomeSelected; // 0x2a0(0x10)
	int32_t NumberOfMissions; // 0x2b0(0x04)
	char UnknownData_2B4[0x4]; // 0x2b4(0x04)
	struct TArray<struct UGeneratedMission*> missions; // 0x2b8(0x10)
	float Biome Image Size; // 0x2c8(0x04)
	struct FVector2D Biome Image Position; // 0x2cc(0x08)
	float Biome Image Angle; // 0x2d4(0x04)
	struct FVector2D Biome Image Shear; // 0x2d8(0x08)
	struct UITM_MisSel_ZoneImage_C* PlanetZone; // 0x2e0(0x08)
	bool IsNew; // 0x2e8(0x01)
	char UnknownData_2E9[0x7]; // 0x2e9(0x07)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x2f0(0x08)
	struct FSlateBrush OldTexture; // 0x2f8(0x88)
	float UnlockStartTime; // 0x380(0x04)
	float UnlockAnimationTime; // 0x384(0x04)
	int32_t BiomeIndex; // 0x388(0x04)

	void GetSoundCoordinate(struct FVector SoundWorldPos); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetSoundCoordinate
	void SetCampaignVisiblity(); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetCampaignVisiblity
	bool IsUnlocked(); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.IsUnlocked
	void CreateMissionIcons(struct TArray<struct UGeneratedMission*> Array); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.CreateMissionIcons
	bool HasMissions(); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.HasMissions
	void GetController(struct ABP_PlayerController_SpaceRig_C* AsBP Player Controller Space Rig); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetController
	void SortMissions(struct TArray<struct UGeneratedMission*> missions, struct TMap<struct UMissionTemplate*, int32_t> MissionCount1); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SortMissions
	void GetMissionsForBiome(struct TArray<struct UGeneratedMission*> Array, struct TArray<struct UGeneratedMission*> missions); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetMissionsForBiome
	void Unselect(); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Unselect
	void Select(); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Select
	void PreConstruct(bool IsDesignTime); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.PreConstruct
	void BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature(); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature(); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature
	void SetData(struct TArray<struct UGeneratedMission*> missions, bool IsNewBiome, int32_t BiomeIndex); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetData
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Tick
	void ShowUnlockZone(); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ShowUnlockZone
	void ExecuteUbergraph_ITM_MisSel_Biome(int32_t EntryPoint); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ExecuteUbergraph_ITM_MisSel_Biome
	void BiomeSelected__DelegateSignature(struct UITM_MisSel_Biome_C* Biome); // Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BiomeSelected__DelegateSignature
};

