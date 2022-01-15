#ifndef UE4SS_SDK_Lore_ResourcesPage_HPP
#define UE4SS_SDK_Lore_ResourcesPage_HPP

class ULore_ResourcesPage_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner_84;
    UImage* IconBig;
    ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame;
    ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_98;
    ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_293;
    ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_585;
    ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_656;
    ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_702;
    ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_887;
    ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_1160;
    ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_C_0;
    ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_C_1;
    ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_C_2;
    ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_C_1162;
    ULore_Resources_Content_ResourceInfo_C* Lore_Resources_Content_ResourceInfo;
    UUniformGridPanel* ResourceHolder;
    UTextBlock* Text_CategoryDescription;
    UTextBlock* Text_ResourceDescription;
    UTextBlock* Text_ResourceName;
    ULore_Resources_Content_Frame_C* SelectedButton;
    int32 NumberOfColumns;

    void SetData(const FText CategoryDescription, const TArray<FMM_ResourceInfo>& Resources);
    void OnResourceClicked(ULore_Resources_Content_Frame_C* Button, FMM_ResourceInfo Resource);
    void ExecuteUbergraph_Lore_ResourcesPage(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, const FText K2Node_CustomEvent_CategoryDescription, const TArray<FMM_ResourceInfo>& K2Node_CustomEvent_Resources, int32 CallFunc_Array_Length_ReturnValue, ULore_Resources_Content_Frame_C* K2Node_CustomEvent_Button, FMM_ResourceInfo K2Node_CustomEvent_Resource, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, FMM_ResourceInfo CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, OnClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, ULore_Resources_Content_Frame_C* CallFunc_Create_ReturnValue, UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue);
}

#endif
