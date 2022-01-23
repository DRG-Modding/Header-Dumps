#ifndef UE4SS_SDK_Biome_ToolTip_HPP
#define UE4SS_SDK_Biome_ToolTip_HPP

class UBiome_ToolTip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UBasic_ResourceIcon_C* Basic_ResourceIconA;
    class UBasic_ResourceIcon_C* Basic_ResourceIconB;
    class UFSDLabelWidget* ResourceAName;
    class UFSDLabelWidget* ResourceBName;
    FVector2D Position;
    FVector2D Alignment;
    class UWidget* Owner;

    void SetData(class UResourceData* ResourceA, class UResourceData* ResourceB);
    void SetPostionAndAlignment(FVector2D InPosition, FVector2D InAlignment, class UCanvasPanelSlot* CanvasSlot, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
    void SetTarget(class UWidget* Target Widget, bool CallFunc_IsValid_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Set Tool Tip Owner(class UWidget* Owner);
    void ExecuteUbergraph_Biome_ToolTip(int32 EntryPoint, class UWidget* K2Node_CustomEvent_Owner, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime);
};

#endif
