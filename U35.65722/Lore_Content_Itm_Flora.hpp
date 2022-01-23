#ifndef UE4SS_SDK_Lore_Content_Itm_Flora_HPP
#define UE4SS_SDK_Lore_Content_Itm_Flora_HPP

class ULore_Content_Itm_Flora_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* FloraImage;
    class USizeBox* SizeBox_17;
    FText Name;
    FText Description;

    class UWidget* GetToolTipWidget_0(class UBasic_ToolTip_HeadlineAndText_C* HoverTooltipWidget, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UBasic_ToolTip_HeadlineAndText_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    void SetData(FText Name, FText Description, class UTexture2D* Texture, FGuid ObjectID);
    void ExecuteUbergraph_Lore_Content_Itm_Flora(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FText K2Node_CustomEvent_Name, FText K2Node_CustomEvent_Description, class UTexture2D* K2Node_CustomEvent_Texture, FGuid K2Node_CustomEvent_ObjectID, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsInMinersManual_ReturnValue, ESlateVisibility K2Node_Select_Default);
};

#endif
