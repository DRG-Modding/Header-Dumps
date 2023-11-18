#ifndef UE4SS_SDK_ITM_MisSel_Biome_HPP
#define UE4SS_SDK_ITM_MisSel_Biome_HPP

class UITM_MisSel_Biome_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ScannersOutOfRange;
    class UWidgetAnimation* Infobox_MouseOver;
    class UWidgetAnimation* NewZoneIntro;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UCanvasPanel* CanvasPanel_Outer;
    class UITM_SeasonChallengeIcon_C* Icon_Challenge;
    class UImage* Img_Shadow;
    class UITM_Campaign_Icon_C* ITM_Campaign_Icon;
    class UButton* MainButton;
    class UHorizontalBox* MissionsAvailiable;
    class UTextBlock* NoMissionsAvailbable;
    class UTextBlock* TextBlock_BiomeName;
    class UBiome* Biome;
    FITM_MisSel_Biome_CBiomeSelected BiomeSelected;
    void BiomeSelected(class UITM_MisSel_Biome_C* Biome);
    int32 NumberOfMissions;
    TArray<class UGeneratedMission*> missions;
    float Biome Image Size;
    FVector2D Biome Image Position;
    float Biome Image Angle;
    FVector2D Biome Image Shear;
    class UITM_MisSel_RegionImage_C* Region;
    bool IsNew;
    class UMaterialInstanceDynamic* DynamicMaterial;
    FSlateBrush OldTexture;
    float UnlockStartTime;
    float UnlockAnimationTime;
    int32 BiomeIndex;

    void GetSoundCoordinate(FVector& SoundWorldPos);
    void SetCampaignVisiblity();
    bool IsUnlocked();
    void CreateMissionIcons(TArray<class UGeneratedMission*>& Array);
    bool HasMissions();
    void GetController(class ABP_PlayerController_SpaceRig_C*& AsBP Player Controller Space Rig);
    void SortMissions(TArray<class UGeneratedMission*>& missions, TMap<UMissionTemplate*, int32>& MissionCount1);
    void GetMissionsForBiome(TArray<class UGeneratedMission*>& Array, TArray<class UGeneratedMission*>& missions);
    void Unselect();
    void Select();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature();
    void SetData(const TArray<class UGeneratedMission*>& missions, bool IsNewBiome, int32 BiomeIndex);
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ShowUnlockZone();
    void ShowChallengeIcon(bool InShow, class UTexture2D* Icon, FLinearColor Color);
    void ExecuteUbergraph_ITM_MisSel_Biome(int32 EntryPoint);
    void BiomeSelected__DelegateSignature(class UITM_MisSel_Biome_C* Biome);
};

#endif
