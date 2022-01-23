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
    void PlayRevealAnim(float Duration, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void GetCategory(class USchematicCategory*& Category, bool CallFunc_IsValid_ReturnValue);
    void OnItemReset(class USchematic* Schematic);
    void SetHovering(bool InHovering, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, bool CallFunc_IsAnimationPlaying_ReturnValue, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, float CallFunc_GetAnimationCurrentTime_ReturnValue, float K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void TryBuildSchematic(bool& success, bool CallFunc_IsValid_ReturnValue, ESchematicState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void OnItemChanged(class USchematic* Schematic);
    void GetSchematic(class USchematic*& Schematic);
    void Refresh(bool RefreshImage, class UVanitySchematicItem* K2Node_DynamicCast_AsVanity_Schematic_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class UVanityItem* CallFunc_GetVanityItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsSchematicOwned_ReturnValue, bool CallFunc_HasBeenForged_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, TMap<UResourceData*, int32> CallFunc_GetResourceCost_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    void SetSchematic(class USchematic* InSchematic, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array, bool CallFunc_HasBeenForged_ReturnValue, class UWidget* K2Node_Select_Default, TMap<UResourceData*, int32> CallFunc_GetResourceCost_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_GetTitle_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void GenerateIcon(class UVanityItem* Item, class UPlayerCharacterID* Character);
    void ExecuteUbergraph_UI_Forge_Schematic(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class UVanityItem* K2Node_CustomEvent_Item, class UPlayerCharacterID* K2Node_CustomEvent_character, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UIconGenerationManager* CallFunc_GetIconGenerationManager_ReturnValue, class UTextureRenderTarget2D* CallFunc_GenerateVanityIcon_Async_icon, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void OnItemClicked__DelegateSignature(class UUI_Forge_Schematic_C* Item);
    void OnItemUnhovered__DelegateSignature(class UUI_Forge_Schematic_C* Item);
    void OnItemHovered__DelegateSignature(class UUI_Forge_Schematic_C* Item);
};

#endif
