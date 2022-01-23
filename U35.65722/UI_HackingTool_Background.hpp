#ifndef UE4SS_SDK_UI_HackingTool_Background_HPP
#define UE4SS_SDK_UI_HackingTool_Background_HPP

class UUI_HackingTool_Background_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* BulletsBox;
    class UTextBlock* Progress_Text;
    class UTextBlock* SubProgress_Text;
    int32 Stage;
    int32 MaxStages;
    TArray<class UImage*> Transitions;
    TArray<class UImage*> Bullets;
    FText Header;
    FText SubHeader;

    void SetSubHeader(FText InText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetHeader(FText InText);
    void NextStage(int32 CallFunc_Add_IntInt_ReturnValue);
    void SetCurrentStage(int32 Stage, int32 Index, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Clamp_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, FLinearColor CallFunc_SelectMenuColor_OutputColor, int32 CallFunc_Add_IntInt_ReturnValue_2, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_EqualEqual_IntInt_ReturnValue, FLinearColor CallFunc_SelectMenuColor_OutputColor_1, bool CallFunc_Less_IntInt_ReturnValue_2, class UImage* CallFunc_Array_Get_Item_1, FLinearColor K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3);
    void SetMaxStages(int32 InMaxStages, int32 Index, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, class UImage* CallFunc_CreateImageSized_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UImage* CallFunc_CreateImageSized_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot, class UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox, class UImage* CallFunc_AddChildToHorizontalBoxEx_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FMargin K2Node_MakeStruct_Margin, bool CallFunc_LessEqual_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot_1, class UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox_1, class UImage* CallFunc_AddChildToHorizontalBoxEx_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_HackingTool_Background(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
