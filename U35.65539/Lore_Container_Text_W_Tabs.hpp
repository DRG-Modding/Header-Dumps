#ifndef UE4SS_SDK_Lore_Container_Text_W_Tabs_HPP
#define UE4SS_SDK_Lore_Container_Text_W_Tabs_HPP

class ULore_Container_Text_W_Tabs_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Window_CutCorner_C* Basic_Window_75;
    ULore_Content_Info_Tab_W_Icon_C* Lore_InfoBox;
    ULore_Content_Info_Tab_W_Icon_C* Main_InfoBox;
    UTextBlock* TextBlock_LoreInfo;
    UTextBlock* TextBlock_MainText;
    UWidgetSwitcher* WidgetSwitcher_Text;
    FText TempText;

    void SetText(FText MainInfo, const TArray<FText>& LoreText);
    void Construct();
    void MainInfoClicked();
    void LoreInfoClicked();
    void SetSelection(const int32 Index);
    void ExecuteUbergraph_Lore_Container_Text_W_Tabs(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FText K2Node_CustomEvent_MainInfo, const TArray<FText>& K2Node_CustomEvent_LoreText, FText CallFunc_Array_Get_Item, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, OnClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, OnClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, const int32 K2Node_CustomEvent_Index, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
}

#endif
