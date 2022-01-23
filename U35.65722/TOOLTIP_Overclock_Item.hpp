#ifndef UE4SS_SDK_TOOLTIP_Overclock_Item_HPP
#define UE4SS_SDK_TOOLTIP_Overclock_Item_HPP

class UTOOLTIP_Overclock_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow23;
    class UTextBlock* DATA_Overclock_CategoryName;
    class UTextBlock* DATA_Overclock_Title;
    class UBorder* EquipBorder;
    class UBorder* HeaderBorder2;
    class UOverlay* HeaderOverlay;
    class USizeBox* HeaderSize;
    class UITM_Overclock_Details_C* ITM_Overclock_Details;
    class UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    class UItemUpgrade* Overclock;
    class USchematicCategory* Category;

    void PreConstruct(bool IsDesignTime);
    void SetOverclock(class UItemUpgrade* Overclock);
    void ExecuteUbergraph_TOOLTIP_Overclock_Item(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class UItemUpgrade* K2Node_CustomEvent_Overclock, class USchematicCategory* CallFunc_FromUpgrade_OutSchematicCategory, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_1);
};

#endif
