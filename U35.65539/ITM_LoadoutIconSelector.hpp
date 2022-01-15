#ifndef UE4SS_SDK_ITM_LoadoutIconSelector_HPP
#define UE4SS_SDK_ITM_LoadoutIconSelector_HPP

class UITM_LoadoutIconSelector_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBorder* Border_1;
    UUniformGridPanel* IconGrid;
    UTextBlock* SkinLabel;
    int32 Columns;
    FITM_LoadoutIconSelector_COnIconSelected OnIconSelected;
    void OnIconSelected(UTexture2D* Texture, int32 ImageIndex);
    TArray<UTexture2D*> TempIconList;

    void FillGrid(UTexture2D* Texture, int32 Index, UUniformGridSlot* GridItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, UGameData* CallFunc_GetFSDGameData_ReturnValue, UTexture2D* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UITM_LoadoutIcon_C* CallFunc_Create_ReturnValue, OnClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue);
    void SetData();
    void OnIconClicked(UTexture2D* Texture, int32 ImageIndex);
    void ExecuteUbergraph_ITM_LoadoutIconSelector(int32 EntryPoint, UTexture2D* K2Node_CustomEvent_Texture, int32 K2Node_CustomEvent_ImageIndex);
    void OnIconSelected__DelegateSignature(UTexture2D* Texture, int32 ImageIndex);
}

#endif
