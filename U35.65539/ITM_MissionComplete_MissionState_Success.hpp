#ifndef UE4SS_SDK_ITM_MissionComplete_MissionState_Success_HPP
#define UE4SS_SDK_ITM_MissionComplete_MissionState_Success_HPP

class UITM_MissionComplete_MissionState_Success_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimReward;
    UWidgetAnimation* StateTextAppear;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UOverlay* CompletedOverlay;
    UTextBlock* DATA_MissionState;
    UTextBlock* DATA_MissionState_Shadow;
    UImage* Image_0;
    UImage* Image_1;
    UImage* Image_2;
    UImage* Image_3;
    UImage* Image_5;
    UImage* Image_6;
    UImage* Image_7;
    UImage* Image_8;
    UITM_CharacterIcon_C* ITM_CharacterIcon;
    UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    UITM_MatrixCore_C* ITM_MatrixCore;
    UTextBlock* MatrixCoreCategory;
    UBorder* MatrixCoreInfoBox;
    UTextBlock* MatrixCoreName;
    UOverlay* MatrixCoreOverlay;
    UImage* MissionState_BGglow;
    UImage* MissionState_BGshadow;
    UImage* NoiseImage;
    UVerticalBox* OverclockOwnerBox;
    UOverlay* Overlay_3;
    UUI_Forge_Schematic_OwnerIcon_C* UI_Forge_Schematic_OwnerIcon;
    UUI_RunningText_C* UI_RunningText;
    bool MissionFailed;
    FText StatusText;
    float StartDelay;
    FITM_MissionComplete_MissionState_Success_COnAnnouncementFinished OnAnnouncementFinished;
    void OnAnnouncementFinished();
    USchematic* Reward;
    float RewardProgress;

    void ClearPreview();
    void UpdateRewardsGFX(USchematicItem* Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UResourceSchematicItem* K2Node_DynamicCast_AsResource_Schematic_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, FText CallFunc_GetTitle_ReturnValue);
    void SetRewardProgress(float InRewardProgress, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetStatusText(FText InText, FText CallFunc_TextToUpper_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnimFinishedEvent();
    void BndEvt__UI_RunningText_K2Node_ComponentBoundEvent_0_OnFinished__DelegateSignature();
    void ExecuteUbergraph_ITM_MissionComplete_MissionState_Success(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, FLinearColor K2Node_Select_Default, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void OnAnnouncementFinished__DelegateSignature();
}

#endif
