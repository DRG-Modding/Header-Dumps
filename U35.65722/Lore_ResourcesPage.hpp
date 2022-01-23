#ifndef UE4SS_SDK_Lore_ResourcesPage_HPP
#define UE4SS_SDK_Lore_ResourcesPage_HPP

class ULore_ResourcesPage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner_84;
    class UImage* IconBig;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_98;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_293;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_585;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_656;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_702;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_887;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_1160;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_C_0;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_C_1;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_C_2;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_C_1162;
    class ULore_Resources_Content_ResourceInfo_C* Lore_Resources_Content_ResourceInfo;
    class UUniformGridPanel* ResourceHolder;
    class UTextBlock* Text_CategoryDescription;
    class UTextBlock* Text_ResourceDescription;
    class UTextBlock* Text_ResourceName;
    class ULore_Resources_Content_Frame_C* SelectedButton;
    int32 NumberOfColumns;

    void SetData(const FText CategoryDescription, const TArray<FMM_ResourceInfo>& Resources);
    void OnResourceClicked(class ULore_Resources_Content_Frame_C* Button, FMM_ResourceInfo Resource);
    void ExecuteUbergraph_Lore_ResourcesPage(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, const FText K2Node_CustomEvent_CategoryDescription, const TArray<FMM_ResourceInfo>& K2Node_CustomEvent_Resources, int32 CallFunc_Array_Length_ReturnValue, class ULore_Resources_Content_Frame_C* K2Node_CustomEvent_Button, FMM_ResourceInfo K2Node_CustomEvent_resource, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, FMM_ResourceInfo CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, FExecuteUbergraph_Lore_ResourcesPageK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, class ULore_Resources_Content_Frame_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue);
};

#endif
