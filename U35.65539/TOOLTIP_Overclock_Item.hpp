#ifndef UE4SS_SDK_TOOLTIP_Overclock_Item_HPP
#define UE4SS_SDK_TOOLTIP_Overclock_Item_HPP

class UTOOLTIP_Overclock_Item_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow23;
    UTextBlock* DATA_Overclock_CategoryName;
    UTextBlock* DATA_Overclock_Title;
    UBorder* EquipBorder;
    UBorder* HeaderBorder2;
    UOverlay* HeaderOverlay;
    USizeBox* HeaderSize;
    UITM_Overclock_Details_C* ITM_Overclock_Details;
    UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    UItemUpgrade* Overclock;
    USchematicCategory* Category;

    void PreConstruct(bool IsDesignTime);
    void SetOverclock(UItemUpgrade* Overclock);
    void ExecuteUbergraph_TOOLTIP_Overclock_Item(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UItemUpgrade* K2Node_CustomEvent_Overclock, USchematicCategory* CallFunc_FromUpgrade_OutSchematicCategory, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_1);
}

#endif
