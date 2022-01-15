#ifndef UE4SS_SDK_Biome_ToolTip_HPP
#define UE4SS_SDK_Biome_ToolTip_HPP

class UBiome_ToolTip_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Intro;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UBasic_ResourceIcon_C* Basic_ResourceIconA;
    UBasic_ResourceIcon_C* Basic_ResourceIconB;
    UFSDLabelWidget* ResourceAName;
    UFSDLabelWidget* ResourceBName;
    FVector2D Position;
    FVector2D Alignment;
    UWidget* Owner;

    void SetData(UResourceData* ResourceA, UResourceData* ResourceB);
    void SetPostionAndAlignment(FVector2D InPosition, FVector2D InAlignment, UCanvasPanelSlot* CanvasSlot, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
    void SetTarget(UWidget* Target Widget, bool CallFunc_IsValid_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Set Tool Tip Owner(UWidget* Owner);
    void ExecuteUbergraph_Biome_ToolTip(int32 EntryPoint, UWidget* K2Node_CustomEvent_Owner, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
