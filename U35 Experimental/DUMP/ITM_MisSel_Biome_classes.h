// WidgetBlueprintGeneratedClass ITM_MisSel_Biome.ITM_MisSel_Biome_C
// Size: 0x38c (Inherited: 0x230)
struct UITM_MisSel_Biome_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* NewZoneIntro; // 0x238(0x08)
	UWidgetAnimation* BiomeGlow_InActive; // 0x240(0x08)
	UWidgetAnimation* BiomeGlow; // 0x248(0x08)
	UWidgetAnimation* Infobox_MouseOver; // 0x250(0x08)
	UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x258(0x08)
	UCanvasPanel* CanvasPanel_Outer; // 0x260(0x08)
	UImage* IMG_Shadow; // 0x268(0x08)
	UITM_Campaign_Icon_C* ITM_Campaign_Icon; // 0x270(0x08)
	UButton* MainButton; // 0x278(0x08)
	UHorizontalBox* MissionsAvailiable; // 0x280(0x08)
	UTextBlock* NoMissionsAvailbable; // 0x288(0x08)
	UTextBlock* TextBlock_BiomeName; // 0x290(0x08)
	UBiome* Biome; // 0x298(0x08)
	FMulticastInlineDelegate BiomeSelected; // 0x2a0(0x10)
	int32_t NumberOfMissions; // 0x2b0(0x04)
	TArray<UGeneratedMission*> missions; // 0x2b8(0x10)
	float Biome Image Size; // 0x2c8(0x04)
	FVector2D Biome Image Position; // 0x2cc(0x08)
	float Biome Image Angle; // 0x2d4(0x04)
	FVector2D Biome Image Shear; // 0x2d8(0x08)
	UITM_MisSel_ZoneImage_C* PlanetZone; // 0x2e0(0x08)
	bool IsNew; // 0x2e8(0x01)
	UMaterialInstanceDynamic* DynamicMaterial; // 0x2f0(0x08)
	FSlateBrush OldTexture; // 0x2f8(0x88)
	float UnlockStartTime; // 0x380(0x04)
	float UnlockAnimationTime; // 0x384(0x04)
	int32_t BiomeIndex; // 0x388(0x04)

	void GetSoundCoordinate(FVector SoundWorldPos);
	void SetCampaignVisiblity();
	bool IsUnlocked();
	void CreateMissionIcons(TArray<UGeneratedMission*> Array);
	bool HasMissions();
	void GetController(ABP_PlayerController_SpaceRig_C* AsBP Player Controller Space Rig);
	void SortMissions(TArray<UGeneratedMission*> missions, TMap<UMissionTemplate*, int32_t> MissionCount1);
	void GetMissionsForBiome(TArray<UGeneratedMission*> Array, TArray<UGeneratedMission*> missions);
	void Unselect();
	void Select();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature();
	void SetData(TArray<UGeneratedMission*> missions, bool IsNewBiome, int32_t BiomeIndex);
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void ShowUnlockZone();
	void ExecuteUbergraph_ITM_MisSel_Biome(int32_t EntryPoint);
	void BiomeSelected__DelegateSignature(UITM_MisSel_Biome_C* Biome);
};

