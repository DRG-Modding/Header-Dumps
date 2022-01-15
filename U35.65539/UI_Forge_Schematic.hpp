#ifndef UE4SS_SDK_UI_Forge_Schematic_HPP
#define UE4SS_SDK_UI_Forge_Schematic_HPP

class UUI_Forge_Schematic_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* IconReady;
    UWidgetAnimation* AnimReveal;
    UWidgetAnimation* Hover;
    UBorder* Border_75;
    UOverlay* ContentOverlay;
    UImage* ICON_Item;
    UOverlay* IconOverlay;
    UImage* Image_91;
    UButton* ItemButton;
    UITM_CharacterIcon_C* ITM_CharacterIcon;
    UITM_MatrixCore_C* ITM_MatrixCore;
    UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    UITM_ItemUnlockedIcon_C* NotificationIcon;
    UTextBlock* SchematicCategoryLabel;
    UUI_HorizontalResourceBar_C* SchematicCost;
    UTextBlock* SchematicNameLabel;
    UWidgetSwitcher* TypeSwitcher;
    UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon;
    USchematic* Schematic;
    bool Hovered;
    FUI_Forge_Schematic_COnItemHovered OnItemHovered;
    void OnItemHovered(UUI_Forge_Schematic_C* Item);
    FUI_Forge_Schematic_COnItemUnhovered OnItemUnhovered;
    void OnItemUnhovered(UUI_Forge_Schematic_C* Item);
    FUI_Forge_Schematic_COnItemClicked OnItemClicked;
    void OnItemClicked(UUI_Forge_Schematic_C* Item);
    bool Show Cost;
    bool HideIfNotForgeable;
    bool ShowNewItemNotification;
    UTextureRenderTarget2D* IconRenderTarget;

    void ReleaseRenderTarget();
    void PrepareRevealAnim();
    void PlayRevealAnim(float Duration, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void GetCategory(USchematicCategory*& Category, bool CallFunc_IsValid_ReturnValue);
    void OnItemReset(USchematic* Schematic);
    void SetHovering(bool InHovering, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool CallFunc_IsAnimationPlaying_ReturnValue, uint8 K2Node_Select_Default, float CallFunc_GetAnimationCurrentTime_ReturnValue, float K2Node_Select_Default_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void TryBuildSchematic(bool& success, bool CallFunc_IsValid_ReturnValue, ESchematicState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void OnItemChanged(USchematic* Schematic);
    void GetSchematic(USchematic*& Schematic);
    void Refresh(bool RefreshImage, UVanitySchematicItem* K2Node_DynamicCast_AsVanity_Schematic_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UVanityItem* CallFunc_GetVanityItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsSchematicOwned_ReturnValue, bool CallFunc_HasBeenForged_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, TMap<UResourceData*, int32> CallFunc_GetResourceCost_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    void SetSchematic(USchematic* InSchematic, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<UObject*>& K2Node_MakeArray_Array, bool CallFunc_HasBeenForged_ReturnValue, UWidget* K2Node_Select_Default, TMap<UResourceData*, int32> CallFunc_GetResourceCost_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_GetTitle_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void GenerateIcon(UVanityItem* Item, UPlayerCharacterID* Character);
    void ExecuteUbergraph_UI_Forge_Schematic(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UVanityItem* K2Node_CustomEvent_Item, UPlayerCharacterID* K2Node_CustomEvent_character, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UIconGenerationManager* CallFunc_GetIconGenerationManager_ReturnValue, UTextureRenderTarget2D* CallFunc_GenerateVanityIcon_Async_icon, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void OnItemClicked__DelegateSignature(UUI_Forge_Schematic_C* Item);
    void OnItemUnhovered__DelegateSignature(UUI_Forge_Schematic_C* Item);
    void OnItemHovered__DelegateSignature(UUI_Forge_Schematic_C* Item);
}

#endif
