#ifndef UE4SS_SDK_HackingTool_Progress_HPP
#define UE4SS_SDK_HackingTool_Progress_HPP

class UHackingTool_Progress_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* BulletsBox;
    int32 MaxStages;
    int32 CurrentStage;
    TArray<class UImage*> Stages;
    TArray<class UImage*> Transitions;
    FHackingTool_Progress_COnNextStage OnNextStage;
    void OnNextStage(int32 InNewStage, int32 InTotalStages);

    void GetCurrentStage(int32& CurrentStage);
    void NextStage(int32 CallFunc_Add_IntInt_ReturnValue);
    void SetCurrentStage(int32 InCurrentStage, int32 Index, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, FLinearColor CallFunc_SelectMenuColor_OutputColor, int32 Temp_int_Loop_Counter_Variable_1, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, FLinearColor CallFunc_SelectMenuColor_OutputColor_1, int32 CallFunc_Clamp_ReturnValue, class UImage* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2);
    void SetMaxStages(int32 MaxStages, int32 Stage, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, class UImage* CallFunc_CreateImageSized_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, class UImage* CallFunc_CreateImageSized_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot, class UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox, class UImage* CallFunc_AddChildToHorizontalBoxEx_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FMargin K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot_1, class UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox_1, class UImage* CallFunc_AddChildToHorizontalBoxEx_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HackingTool_Progress(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
    void OnNextStage__DelegateSignature(int32 InNewStage, int32 InTotalStages);
};

#endif
