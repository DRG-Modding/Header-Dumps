#ifndef UE4SS_SDK_UI_Forge_MasteryBar_HPP
#define UE4SS_SDK_UI_Forge_MasteryBar_HPP

class UUI_Forge_MasteryBar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimResetReward;
    UWidgetAnimation* AnimRewardPopUp;
    UWidgetAnimation* AnimCount;
    UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_1;
    UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_2;
    UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_3;
    UBorder* BorderProgressBarXP;
    UITM_MatrixCore_C* ForgeLevelReward;
    UProgressBar* GhostProgressBar;
    UProgressBar* LevelProgressBar;
    UHorizontalBox* MasteryBarBox;
    UUI_Forge_LevelIcon_C* PlayerForgeLevel;
    ESchematicType Reward;
    float StartXP;
    float EndXP;
    float LerpProgress;
    bool LevelIncreased;
    FUI_Forge_MasteryBar_COnCountingFinished OnCountingFinished;
    void OnCountingFinished(uint8 Reward);

    UWidget* Get_MasteryBarBox_ToolTipWidget_0(UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, UTOOLTIP_ForgingMasteryBar_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    void StartCounting(int32 InStartLevel, float InStartXP, bool Temp_bool_Variable, float Temp_float_Variable, int32 CallFunc_GetForgingLevel_ReturnValue, float CallFunc_GetForgingLevelProgress_ReturnValue, int32 CallFunc_GetForgingLevel_ReturnValue_1, int32 CallFunc_GetLevel_Level, int32 CallFunc_GetForgingLevel_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Select_Default, int32 CallFunc_Min_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetLerpProgress(float Value, float CallFunc_Lerp_ReturnValue);
    void SetFromSaveGame(bool animate, float CallFunc_GetForgingLevelProgress_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, int32 CallFunc_GetForgingLevel_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetLevel_Level, ESchematicType CallFunc_GetNextForgingMasterRewardType_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void PlayRewardAnim();
    void RewardPopUpStarted();
    void FinishedCounting();
    void ResetReward();
    void ExecuteUbergraph_UI_Forge_MasteryBar(int32 EntryPoint, float CallFunc_GetForgingLevelProgress_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, int32 CallFunc_GetForgingLevel_ReturnValue);
    void OnCountingFinished__DelegateSignature(uint8 Reward);
}

#endif
