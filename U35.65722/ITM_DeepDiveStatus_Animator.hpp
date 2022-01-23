#ifndef UE4SS_SDK_ITM_DeepDiveStatus_Animator_HPP
#define UE4SS_SDK_ITM_DeepDiveStatus_Animator_HPP

class UITM_DeepDiveStatus_Animator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CompletedStage3;
    class UWidgetAnimation* CompletedStage2;
    class UWidgetAnimation* CompletedStage1;
    class UITM_DeepDive_StageIcon_C* IconStage1;
    class UITM_DeepDive_StageIcon_C* IconStage2;
    class UITM_DeepDive_StageIcon_C* IconStage3;
    class UBorder* VerticalBar;
    TArray<class UWidgetAnimation*> StageAnims;
    int32 NextStage;
    FITM_DeepDiveStatus_Animator_COnStageAnimationsFinished OnStageAnimationsFinished;
    void OnStageAnimationsFinished();
    int32 MissionsCompleted;

    void InitStageIcons(int32 Index, class UITM_DeepDive_StageIcon_C* Icon, TArray<class UITM_DeepDive_StageIcon_C*> StageIcons, bool Temp_bool_Variable, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UITM_DeepDive_StageIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UITM_DeepDive_StageIcon_C*>& K2Node_MakeArray_Array, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, FVector2D K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void FinishedAnimating();
    void SetActiveDeepDive();
    void Construct();
    void Play();
    void ExecuteUbergraph_ITM_DeepDiveStatus_Animator(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FExecuteUbergraph_ITM_DeepDiveStatus_AnimatorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class UWidgetAnimation* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, TArray<class UWidgetAnimation*>& K2Node_MakeArray_Array, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue, class UWidgetAnimation* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_Max_ReturnValue);
    void OnStageAnimationsFinished__DelegateSignature();
};

#endif
