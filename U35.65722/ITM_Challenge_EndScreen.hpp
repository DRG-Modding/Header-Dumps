#ifndef UE4SS_SDK_ITM_Challenge_EndScreen_HPP
#define UE4SS_SDK_ITM_Challenge_EndScreen_HPP

class UITM_Challenge_EndScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ChallengeCompleted;
    class UWidgetAnimation* EndProgress;
    class UWidgetAnimation* CountProgress;
    class UWidgetAnimation* Intro;
    class UButton* Button_Outer;
    class UHorizontalBox* HBox_XPGain;
    class UImage* I_Background;
    class UImage* I_Outline;
    class UImage* Image_347;
    class UImage* Image_Challenge;
    class UProgressBar* ProgressBar_142;
    class UTextBlock* Text_NumberOfWins;
    class UTextBlock* Text_XPGain;
    class UTextBlock* TextBlock_ChallengeText;
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
    void ExecuteUbergraph_ITM_Challenge_EndScreen(int32 EntryPoint, class UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, FExecuteUbergraph_ITM_Challenge_EndScreenK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, FExecuteUbergraph_ITM_Challenge_EndScreenK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, EAsyncLoadPriority Temp_byte_Variable, EAsyncLoadPriority Temp_byte_Variable_1, FExecuteUbergraph_ITM_Challenge_EndScreenK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FExecuteUbergraph_ITM_Challenge_EndScreenK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, float K2Node_CustomEvent_DelayBeforeStart, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, EAsyncLoadPriority K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, FText CallFunc_Format_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FText CallFunc_Format_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const TArray<TSoftObjectPtr<UObject>>& K2Node_MakeArray_Array_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1);
    void AnimsFinished__DelegateSignature();
};

#endif
