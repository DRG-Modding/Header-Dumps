#ifndef UE4SS_SDK_ITM_MisSel_Biome_HPP
#define UE4SS_SDK_ITM_MisSel_Biome_HPP

class UITM_MisSel_Biome_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NewZoneIntro;
    class UWidgetAnimation* BiomeGlow_InActive;
    class UWidgetAnimation* BiomeGlow;
    class UWidgetAnimation* Infobox_MouseOver;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UCanvasPanel* CanvasPanel_Outer;
    class UITM_SeasonChallengeIcon_C* Icon_Challenge;
    class UImage* IMG_Shadow;
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
    class UITM_MisSel_ZoneImage_C* PlanetZone;
    bool IsNew;
    class UMaterialInstanceDynamic* DynamicMaterial;
    FSlateBrush OldTexture;
    float UnlockStartTime;
    float UnlockAnimationTime;
    int32 BiomeIndex;

    void GetSoundCoordinate(FVector& SoundWorldPos, FVector2D CallFunc_GetViewportSize_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FVector2D CallFunc_Multiply_Vector2DVector2D_ReturnValue, FVector CallFunc_DeprojectScreenToWorld_WorldPosition, FVector CallFunc_DeprojectScreenToWorld_WorldDirection, bool CallFunc_DeprojectScreenToWorld_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
    void SetCampaignVisiblity();
    bool IsUnlocked(class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UPlanetZone* CallFunc_GetPlanetZoneForBiome_ReturnValue, bool CallFunc_IsUnLocked_ReturnValue);
    void CreateMissionIcons(TArray<class UGeneratedMission*>& Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UGeneratedMission* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_MisSel_MissionIconSmall_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
    bool HasMissions(bool CallFunc_Greater_IntInt_ReturnValue);
    void GetController(class ABP_PlayerController_SpaceRig_C*& AsBP Player Controller Space Rig, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess);
    void SortMissions(TArray<class UGeneratedMission*>& missions, TMap<UMissionTemplate*, int32>& MissionCount1, TMap<UMissionTemplate*, int32> MissionCount, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UGeneratedMission* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
    void GetMissionsForBiome(TArray<class UGeneratedMission*>& Array, TArray<class UGeneratedMission*>& missions, TArray<class UGeneratedMission*> BiomeMissions, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UGeneratedMission* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void Unselect(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Select(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature();
    void SetData(const TArray<class UGeneratedMission*>& missions, bool IsNewBiome, int32 BiomeIndex);
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ShowUnlockZone();
    void ShowChallengeIcon(bool InShow, class UTexture2D* Icon, FLinearColor Color);
    void ExecuteUbergraph_ITM_MisSel_Biome(int32 EntryPoint, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor K2Node_MakeStruct_LinearColor, FLinearColor CallFunc_SelectColor_ReturnValue, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_2, bool CallFunc_IsValid_ReturnValue, const FText CallFunc_GetBiomeName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, const TArray<class UGeneratedMission*>& K2Node_CustomEvent_Missions, bool K2Node_CustomEvent_IsNewBiome, int32 K2Node_CustomEvent_BiomeIndex, TArray<class UGeneratedMission*>& CallFunc_GetMissionsForBiome_Missions, int32 CallFunc_Array_Length_ReturnValue_1, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_3, bool CallFunc_Greater_IntInt_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, class ABP_PlayerController_SpaceRig_C* CallFunc_GetController_AsBP_Player_Controller_Space_Rig, class U_SCREEN_MissionSelectionMK3_C* K2Node_DynamicCast_As_SCREEN_Mission_Selection_MK3, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMissions_ReturnValue, bool CallFunc_HasMissions_ReturnValue_1, ESlateVisibility Temp_byte_Variable, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue_1, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue_2, FLinearColor K2Node_MakeStruct_LinearColor_1, FLinearColor K2Node_MakeStruct_LinearColor_2, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, FLinearColor CallFunc_SelectColor_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsUnLocked_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue_3, FLinearColor K2Node_MakeStruct_LinearColor_3, FLinearColor CallFunc_SelectColor_ReturnValue_2, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FLinearColor K2Node_MakeStruct_LinearColor_4, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, FVector CallFunc_GetSoundCoordinate_SoundWorldPos, class UWidgetAnimation* K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_CustomEvent_InShow, class UTexture2D* K2Node_CustomEvent_Icon, FLinearColor K2Node_CustomEvent_Color);
    void BiomeSelected__DelegateSignature(class UITM_MisSel_Biome_C* Biome);
};

#endif
