#ifndef UE4SS_SDK_ITM_Challenge_EndScreen_HPP
#define UE4SS_SDK_ITM_Challenge_EndScreen_HPP

class UITM_Challenge_EndScreen_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ChallengeCompleted;
    UWidgetAnimation* EndProgress;
    UWidgetAnimation* CountProgress;
    UWidgetAnimation* Intro;
    UButton* Button_Outer;
    UHorizontalBox* HBox_XPGain;
    UImage* I_Background;
    UImage* I_Outline;
    UImage* Image_347;
    UImage* Image_Challenge;
    UProgressBar* ProgressBar_142;
    UTextBlock* Text_NumberOfWins;
    UTextBlock* Text_XPGain;
    UTextBlock* TextBlock_ChallengeText;
    FChallengeInfo ChallengeInfo;
    FITM_Challenge_EndScreen_CAnimsFinished AnimsFinished;
    void AnimsFinished();

    void SequenceEvent__ENTRYPOINTITM_Challenge_EndScreen_0();
    void ProgressUpdate();
    void Construct();
    void ShowIntro(float DelayBeforeStart);
    void StartProgressCount();
    void OnProgressFinished();
    void OnImageLoaded();
    void OnFinished();
    void ExecuteUbergraph_ITM_Challenge_EndScreen(int32 EntryPoint, UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, AsyncLoadCompleteDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, EAsyncLoadPriority Temp_byte_Variable, EAsyncLoadPriority Temp_byte_Variable_1, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, float K2Node_CustomEvent_DelayBeforeStart, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, EAsyncLoadPriority K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, FText CallFunc_Format_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FText CallFunc_Format_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const TArray<SoftObjectProperty>& K2Node_MakeArray_Array_3, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1);
    void AnimsFinished__DelegateSignature();
}

#endif
