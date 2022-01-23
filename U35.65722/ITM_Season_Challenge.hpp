#ifndef UE4SS_SDK_ITM_Season_Challenge_HPP
#define UE4SS_SDK_ITM_Season_Challenge_HPP

class UITM_Season_Challenge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnHoverEndScreen;
    class UWidgetAnimation* MissionSelection;
    class UWidgetAnimation* ChallengeComplete;
    class UWidgetAnimation* CountFinished;
    class UWidgetAnimation* CountProgress;
    class UWidgetAnimation* ShowReroll;
    class UWidgetAnimation* OnHover;
    class UWidgetAnimation* RerollAnim;
    class UWidgetAnimation* NewChallengeIntro;
    class UWidgetAnimation* ImageLoaded;
    class UButton* Button_Outer;
    class UButton* Button_Reroll;
    class UHorizontalBox* HBox_Gain;
    class UImage* I_Background;
    class UImage* I_Background_1;
    class UImage* I_ButtonStyle;
    class UImage* I_ButtonStyle_1;
    class UImage* I_ButtonStyle_2;
    class UImage* I_Shade;
    class UImage* I_Shade_Completed;
    class UImage* Image_Challenge;
    class UImage* Image_Checkmark;
    class UImage* Image_Glow;
    class UImage* Image_Glow_Completed;
    class UImage* Image_PerformancePoints;
    class UImage* Image_Reroll;
    class UImage* Image_Token;
    class UImage* Image_Type;
    class UOverlay* Overlay_Outer;
    class UOverlay* Overlay_Scale;
    class UProgressBar* ProgressBar_142;
    class URetainerBox* RetainerBox_Masking;
    class UTextBlock* Text_NumberOfWins;
    class UTextBlock* Text_XPGain;
    class UTextBlock* TextBlock_ChallengeText;
    class UWidgetSwitcher* WidgetSwitcher_Icon;
    FChallengeInfo ChallengeInfo;
    FITM_Season_Challenge_CRerollClicked RerollClicked;
    void RerollClicked(class UITM_Season_Challenge_C* W_Challenge);
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
    void ExecuteUbergraph_ITM_Season_Challenge(int32 EntryPoint, class UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, FExecuteUbergraph_ITM_Season_ChallengeK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ITM_Season_ChallengeK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_ITM_Season_ChallengeK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_ITM_Season_ChallengeK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_ITM_Season_ChallengeK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FYesNoPromptSettings K2Node_MakeStruct_YesNoPromptSettings, bool Temp_bool_Variable, class UYesNoPromptAction* CallFunc_PromptYesNo_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, float CallFunc_Conv_IntToFloat_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FChallengeInfo K2Node_CustomEvent_NewChallengeInfo, bool K2Node_CustomEvent_NewCanReroll, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_CustomEvent_InCanReroll, const TArray<TSoftObjectPtr<UObject>>& K2Node_MakeArray_Array, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Conv_IntToFloat_ReturnValue_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, FText CallFunc_Format_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FText CallFunc_Format_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue_1, class UWidget* K2Node_Select_Default, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FText CallFunc_Format_ReturnValue_2, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_2, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_2, bool K2Node_DynamicCast_bSuccess_2, class UWidgetAnimation* K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_2);
    void AddPoints__DelegateSignature();
    void RerollClicked__DelegateSignature(class UITM_Season_Challenge_C* W_Challenge);
};

#endif
