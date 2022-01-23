#ifndef UE4SS_SDK_UI_Forge_MasteryBar_HPP
#define UE4SS_SDK_UI_Forge_MasteryBar_HPP

class UUI_Forge_MasteryBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimResetReward;
    class UWidgetAnimation* AnimRewardPopUp;
    class UWidgetAnimation* AnimCount;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_1;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_2;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_3;
    class UBorder* BorderProgressBarXP;
    class UITM_MatrixCore_C* ForgeLevelReward;
    class UProgressBar* GhostProgressBar;
    class UProgressBar* LevelProgressBar;
    class UHorizontalBox* MasteryBarBox;
    class UUI_Forge_LevelIcon_C* PlayerForgeLevel;
    ESchematicType Reward;
    float StartXP;
    float EndXP;
    float LerpProgress;
    bool LevelIncreased;
    FUI_Forge_MasteryBar_COnCountingFinished OnCountingFinished;
    void OnCountingFinished(uint8 Reward);

    class UWidget* Get_MasteryBarBox_ToolTipWidget_0(class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UTOOLTIP_ForgingMasteryBar_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    void StartCounting(int32 InStartLevel, float InStartXP, bool Temp_bool_Variable, float Temp_float_Variable, int32 CallFunc_GetForgingLevel_ReturnValue, float CallFunc_GetForgingLevelProgress_ReturnValue, int32 CallFunc_GetForgingLevel_ReturnValue_1, int32 CallFunc_GetLevel_Level, int32 CallFunc_GetForgingLevel_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Select_Default, int32 CallFunc_Min_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetLerpProgress(float Value, float CallFunc_Lerp_ReturnValue);
    void SetFromSaveGame(bool animate, float CallFunc_GetForgingLevelProgress_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, int32 CallFunc_GetForgingLevel_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetLevel_Level, ESchematicType CallFunc_GetNextForgingMasterRewardType_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void PlayRewardAnim();
    void RewardPopUpStarted();
    void FinishedCounting();
    void ResetReward();
    void ExecuteUbergraph_UI_Forge_MasteryBar(int32 EntryPoint, float CallFunc_GetForgingLevelProgress_ReturnValue, FExecuteUbergraph_UI_Forge_MasteryBarK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_UI_Forge_MasteryBarK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, int32 CallFunc_GetForgingLevel_ReturnValue);
    void OnCountingFinished__DelegateSignature(uint8 Reward);
};

#endif
