#ifndef UE4SS_SDK_ITM_Season_Challenge_HPP
#define UE4SS_SDK_ITM_Season_Challenge_HPP

class UITM_Season_Challenge_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* OnHoverEndScreen;
    UWidgetAnimation* MissionSelection;
    UWidgetAnimation* ChallengeComplete;
    UWidgetAnimation* CountFinished;
    UWidgetAnimation* CountProgress;
    UWidgetAnimation* ShowReroll;
    UWidgetAnimation* OnHover;
    UWidgetAnimation* RerollAnim;
    UWidgetAnimation* NewChallengeIntro;
    UWidgetAnimation* ImageLoaded;
    UButton* Button_Outer;
    UButton* Button_Reroll;
    UHorizontalBox* HBox_Gain;
    UImage* I_Background;
    UImage* I_Background_1;
    UImage* I_ButtonStyle;
    UImage* I_ButtonStyle_1;
    UImage* I_ButtonStyle_2;
    UImage* I_Shade;
    UImage* I_Shade_Completed;
    UImage* Image_Challenge;
    UImage* Image_Checkmark;
    UImage* Image_Glow;
    UImage* Image_Glow_Completed;
    UImage* Image_PerformancePoints;
    UImage* Image_Reroll;
    UImage* Image_Token;
    UImage* Image_Type;
    UOverlay* Overlay_Outer;
    UOverlay* Overlay_Scale;
    UProgressBar* ProgressBar_142;
    URetainerBox* RetainerBox_Masking;
    UTextBlock* Text_NumberOfWins;
    UTextBlock* Text_XPGain;
    UTextBlock* TextBlock_ChallengeText;
    UWidgetSwitcher* WidgetSwitcher_Icon;
    FChallengeInfo ChallengeInfo;
    FITM_Season_Challenge_CRerollClicked RerollClicked;
    void RerollClicked(UITM_Season_Challenge_C* W_Challenge);
    bool CanReroll;
    bool AtEndscreen;
    FITM_Season_Challenge_CAddPoints AddPoints;
    void AddPoints();
    bool ChallengeCompleted;

    void SequenceEvent__ENTRYPOINTITM_Season_Challenge_1();
    void SequenceEvent__ENTRYPOINTITM_Season_Challenge_0();
    void GetInfo(FChallengeInfo& challenge);
    void No_E6C47A9D469243C399A8EE948A23FA13();
    void Yes_E6C47A9D469243C399A8EE948A23FA13();
    void Construct();
    void OnImageLoaded();
    void BndEvt__Button_Reroll_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PlayIntro();
    void Reroll(FChallengeInfo NewChallengeInfo, bool NewCanReroll);
    void NewRerollText();
    void Refresh();
    void SetCanReroll(bool InCanReroll);
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Reroll_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Reroll_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void OnIntroDone();
    void OnCountFinished();
    void ProgressCount();
    void SetAtMissionSelection();
    void ExecuteUbergraph_ITM_Season_Challenge(int32 EntryPoint, UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, AsyncLoadCompleteDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, YesNoOutputPin__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, YesNoOutputPin__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FYesNoPromptSettings K2Node_MakeStruct_YesNoPromptSettings, bool Temp_bool_Variable, UYesNoPromptAction* CallFunc_PromptYesNo_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, float CallFunc_Conv_IntToFloat_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FChallengeInfo K2Node_CustomEvent_NewChallengeInfo, bool K2Node_CustomEvent_NewCanReroll, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_CustomEvent_InCanReroll, const TArray<SoftObjectProperty>& K2Node_MakeArray_Array, bool CallFunc_IsValidSoftObjectReference_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Conv_IntToFloat_ReturnValue_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, FText CallFunc_Format_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FText CallFunc_Format_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue_1, UWidget* K2Node_Select_Default, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_3, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FText CallFunc_Format_ReturnValue_2, UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, UObject* CallFunc_LoadAsset_Blocking_ReturnValue_2, UTexture2D* K2Node_DynamicCast_AsTexture_2D_2, bool K2Node_DynamicCast_bSuccess_2, UWidgetAnimation* K2Node_Select_Default_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_2);
    void AddPoints__DelegateSignature();
    void RerollClicked__DelegateSignature(UITM_Season_Challenge_C* W_Challenge);
}

#endif
