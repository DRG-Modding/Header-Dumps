#ifndef UE4SS_SDK_MENU_Forge_HPP
#define UE4SS_SDK_MENU_Forge_HPP

class UMENU_Forge_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimShowMasteryBar;
    class UWidgetAnimation* AnimEnterSelection;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_142;
    class UBasic_ButtonScalable2_C* ButtonHistory;
    class UBasic_ButtonScalable2_C* CancelForgeBtn;
    class UUI_Forge_SchematicList_C* ForgeHistoryList;
    class UUI_Forge_SchematicList_C* ForgeInventoryList;
    class UUI_HorizontalResourceBar_C* ForgeItemCost;
    class UOverlay* ForgePopUpOverlay;
    class UITM_BigButton_C* ITM_BigButton;
    class UWidgetSwitcher* ListSwitcher;
    class UMENU_LockedTemplate_C* MENU_LockedTemplate;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    class UUI_Forge_Completed_C* UI_Forge_Completed;
    class UUI_Forge_Details_C* UI_Forge_Details;
    class UUI_Forge_MasteryBar_C* UI_Forge_MasteryBar;
    class UUI_Forge_MasteryReward_C* UI_Forge_MasteryReward;
    class UBorder* WindowBorder;
    class UTextBlock* WindowHeader;
    float ItemSize;
    class UUI_Forge_Schematic_C* SelectedItem;
    bool SelectionBoxOpen;
    bool ItemPopUpOpen;
    bool MasteryBarOpen;
    float EnterAnimSpeed;
    class USchematic* ForgingMasteryReward;
    bool XPBarUpdatesAllowed;

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventbool CallFunc_IsBackMenuMouse_ReturnValue, bool CallFunc_IsCloseButtonVisible_Visible, FEventReply CallFunc_Handled_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue);
    void ToggleMasteryBar(bool Visible, bool Temp_bool_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
    void Forge Schematic(class UUI_Forge_Schematic_C* InSchematic, bool& success, bool CallFunc_TryBuildSchematic_Success, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, TSubclassOf<class APlayerCharacter> CallFunc_GetObjectClass_ReturnValue, class USchematic* CallFunc_GiveForginMasteryReward_ReturnValue, bool CallFunc_GiveForgingXP_ReturnValue);
    void ToggleItemPopUp(bool Visible, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue);
    void ToggleSelectionList(bool Visible, bool Temp_bool_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void IncreaseCraftingStat(class USchematicCategory* SkinVanityCategory, ESchematicType Temp_byte_Variable, class UMissionStat* Temp_object_Variable, class UMissionStat* Temp_object_Variable_1, class UMissionStat* Temp_object_Variable_2, class UMissionStat* Temp_object_Variable_3, bool CallFunc_IsValid_ReturnValue, class USchematic* CallFunc_GetSchematic_Schematic, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, class UMissionStat* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void SetHeader(const FText InText, FText CallFunc_TextToUpper_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventbool CallFunc_IsCloseButtonVisible_Visible, bool CallFunc_IsCloseOrBackMenu_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue);
    void ShowList(bool History, bool Force Rebuild, class UUI_Forge_SchematicList_C* ActiveList, bool Temp_bool_Variable, const FText Temp_text_Variable, const FText Temp_text_Variable_1, bool Temp_bool_Variable_1, const FText Temp_text_Variable_2, const FText Temp_text_Variable_3, bool Temp_bool_Variable_2, const FText K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue, const FText K2Node_Select_Default_1, TArray<class USchematic*>& CallFunc_GetForgedSchematics_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class UUI_Forge_SchematicList_C* K2Node_Select_Default_2);
    void ShowItem(class UUI_Forge_Schematic_C* Item, class UOverclockShematicItem* OverclockItem, class UResourceData* Resource, TMap<UResourceData*, int32> Cost, class USchematic* Schematic, bool CallFunc_IsValid_ReturnValue, FText CallFunc_GetTitle_ReturnValue, bool CallFunc_CanAffordSchematic_ReturnValue, TMap<UResourceData*, int32> CallFunc_GetResourceCost_ReturnValue, class USchematic* CallFunc_GetSchematic_Schematic);
    void Refresh(bool CallFunc_IsPlayInEditor_ReturnValue);
    void UpdateLevelProgress(bool animate);
    void BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature(class UUI_Forge_Schematic_C* Item);
    void BndEvt__ForgeBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void OnShown();
    void BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature();
    void BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ForgeDone();
    void BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature();
    void BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature(uint8 Reward);
    void BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature();
    void Display Pending Mastery Reward();
    void OnForgingXPChanged_Event(float XP);
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void Construct();
    void ShoutLocally(float Delay, class UDialogDataAsset* ShoutData);
    void PreConstruct(bool IsDesignTime);
    void ShoutLocallySoftPtr(float Delay, TSoftObjectPtr<UDialogDataAsset> ShoutData);
    void OnClosed();
    void ExecuteUbergraph_MENU_Forge(int32 EntryPoint, class UUI_Forge_Schematic_C* K2Node_ComponentBoundEvent_Item, FLinearColor CallFunc_MenuColors_OutputColor, class ABP_SR_PlayerControllerBase_C* CallFunc_GetSRController_SRController, bool CallFunc_IsPlayInEditor_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, bool CallFunc_RequireOnePromotedCharacter_Locked, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Forge_Schematic_Success, class USchematic* CallFunc_GetSchematic_Schematic, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, uint8 K2Node_ComponentBoundEvent_Reward, bool CallFunc_IsPlayInEditor_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_CustomEvent_XP, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, float K2Node_CustomEvent_Delay_1, class UDialogDataAsset* K2Node_CustomEvent_ShoutData_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, class UAudioComponent* CallFunc_PlayPitched_ReturnValue, float K2Node_CustomEvent_Delay, TSoftObjectPtr<UDialogDataAsset> K2Node_CustomEvent_ShoutData, class USchematicCategory* CallFunc_GetCategory_Category, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UDialogDataAsset* K2Node_DynamicCast_AsDialog_Data_Asset, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, FExecuteUbergraph_MENU_ForgeK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_4, FExecuteUbergraph_MENU_ForgeK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class USchematic* CallFunc_GetSchematic_Schematic_1);
};

#endif
