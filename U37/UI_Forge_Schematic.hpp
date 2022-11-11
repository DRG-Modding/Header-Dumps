#ifndef UE4SS_SDK_UI_Forge_Schematic_HPP
#define UE4SS_SDK_UI_Forge_Schematic_HPP

class UUI_Forge_Schematic_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* IconReady;
    class UWidgetAnimation* AnimReveal;
    class UWidgetAnimation* Hover;
    class UBorder* Border_75;
    class UOverlay* ContentOverlay;
    class UImage* ICON_Item;
    class UOverlay* IconOverlay;
    class UImage* Image_91;
    class UButton* ItemButton;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UITM_MatrixCore_C* ITM_MatrixCore;
    class UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    class UITM_ItemUnlockedIcon_C* NotificationIcon;
    class UTextBlock* SchematicCategoryLabel;
    class UUI_HorizontalResourceBar_C* SchematicCost;
    class UTextBlock* SchematicNameLabel;
    class UWidgetSwitcher* TypeSwitcher;
    class UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon;
    class USchematic* Schematic;
    bool Hovered;
    FUI_Forge_Schematic_COnItemHovered OnItemHovered;
    void OnItemHovered(class UUI_Forge_Schematic_C* Item);
    FUI_Forge_Schematic_COnItemUnhovered OnItemUnhovered;
    void OnItemUnhovered(class UUI_Forge_Schematic_C* Item);
    FUI_Forge_Schematic_COnItemClicked OnItemClicked;
    void OnItemClicked(class UUI_Forge_Schematic_C* Item);
    bool Show Cost;
    bool HideIfNotForgeable;
    bool ShowNewItemNotification;
    class UTextureRenderTarget2D* IconRenderTarget;

    void ReleaseRenderTarget();
    void PrepareRevealAnim();
    void PlayRevealAnim(float Duration);
    void GetCategory(class USchematicCategory*& Category);
    void OnItemReset(class USchematic* Schematic);
    void SetHovering(bool InHovering);
    void TryBuildSchematic(bool& success);
    void OnItemChanged(class USchematic* Schematic);
    void GetSchematic(class USchematic*& Schematic);
    void Refresh(bool RefreshImage);
    void SetSchematic(class USchematic* InSchematic);
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void GenerateIcon(class UVanityItem* Item, class UPlayerCharacterID* Character);
    void ExecuteUbergraph_UI_Forge_Schematic(int32 EntryPoint);
    void OnItemClicked__DelegateSignature(class UUI_Forge_Schematic_C* Item);
    void OnItemUnhovered__DelegateSignature(class UUI_Forge_Schematic_C* Item);
    void OnItemHovered__DelegateSignature(class UUI_Forge_Schematic_C* Item);
};

#endif
