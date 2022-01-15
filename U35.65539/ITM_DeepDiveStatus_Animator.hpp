#ifndef UE4SS_SDK_ITM_DeepDiveStatus_Animator_HPP
#define UE4SS_SDK_ITM_DeepDiveStatus_Animator_HPP

class UITM_DeepDiveStatus_Animator_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* CompletedStage3;
    UWidgetAnimation* CompletedStage2;
    UWidgetAnimation* CompletedStage1;
    UITM_DeepDive_StageIcon_C* IconStage1;
    UITM_DeepDive_StageIcon_C* IconStage2;
    UITM_DeepDive_StageIcon_C* IconStage3;
    UBorder* VerticalBar;
    TArray<UWidgetAnimation*> StageAnims;
    int32 NextStage;
    FITM_DeepDiveStatus_Animator_COnStageAnimationsFinished OnStageAnimationsFinished;
    void OnStageAnimationsFinished();
    int32 MissionsCompleted;

    void InitStageIcons(int32 Index, UITM_DeepDive_StageIcon_C* Icon, TArray<UITM_DeepDive_StageIcon_C*> StageIcons, bool Temp_bool_Variable, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UITM_DeepDive_StageIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<UITM_DeepDive_StageIcon_C*>& K2Node_MakeArray_Array, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, FVector2D K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void FinishedAnimating();
    void SetActiveDeepDive();
    void Construct();
    void Play();
    void ExecuteUbergraph_ITM_DeepDiveStatus_Animator(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UWidgetAnimation* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, TArray<UWidgetAnimation*>& K2Node_MakeArray_Array, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue, UWidgetAnimation* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_Max_ReturnValue);
    void OnStageAnimationsFinished__DelegateSignature();
}

#endif
