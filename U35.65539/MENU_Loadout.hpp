#ifndef UE4SS_SDK_MENU_Loadout_HPP
#define UE4SS_SDK_MENU_Loadout_HPP

class UMENU_Loadout_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    UITM_CharacterSwitcherBar_C* ITM_Loadout_CharSelect;
    UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow;
    UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_0;
    UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_1;
    UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_2;
    UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_13;
    UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_14;
    UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_15;
    UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_16;
    UITM_Loadout_PerksEquip_C* ITM_Loadout_PerksEquip;
    UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar;
    UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    UVerticalBox* VerticalBox_Left;
    UVerticalBox* VerticalBox_Right;
    FMENU_Loadout_CCharacterSelected CharacterSelected;
    void CharacterSelected();
    TArray<UITM_Loadout_ItemWindow_C*> LoadoutItems;
    UITM_Loadout_ItemWindow_C* HoveredItem;
    float FadeInAnimTime;

    void PlayIntroAnimations(int32 Temp_int_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, UITM_Loadout_ItemWindow_C* K2Node_DynamicCast_AsITM_Loadout_Item_Window, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_1, UWidget* CallFunc_GetChildAt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue_1, UITM_Loadout_ItemWindow_C* K2Node_DynamicCast_AsITM_Loadout_Item_Window_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
    void CheckForNotification(bool HasNotification, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, UGameData* CallFunc_GetFSDGameData_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue_1, bool CallFunc_IsInItemUINotificationSet_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue_1, bool CallFunc_IsInItemUINotificationSet_ReturnValue_2, UITM_Loadout_ItemWindow_C* CallFunc_Array_Get_Item, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Handle_Key_Input_ReturnValue, bool CallFunc_Handle_Key_Input_Handled);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    void GetClassFromPlayerState(UPlayerCharacterID*& SelectedCharacter, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnShown();
    void Refresh();
    void BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(TSubclassOf<UPlayerCharacter> Character);
    void Stop Ansel();
    void Start Ansel();
    void OnClosed();
    void Refresh Loadout Items();
    void Setup Loadout Items();
    void OnNewTopWindow();
    void ReceiveSelectCharacterCommand();
    void ReceiveSelectNextCommand();
    void ReceiveSelectPreviousCommand();
    void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature();
    void On Unhovered_Event(UITM_Loadout_ItemWindow_C* Item);
    void On Hovered(UITM_Loadout_ItemWindow_C* Item);
    void Open Item Window(UITM_Loadout_ItemWindow_C* Item);
    void ExecuteUbergraph_MENU_Loadout(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, On Clicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, On Hovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_IsDesignTime, TSubclassOf<UPlayerCharacter> K2Node_ComponentBoundEvent_Character, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UBP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UBP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base_1, bool K2Node_DynamicCast_bSuccess_1, TArray<UITM_Loadout_ItemWindow_C*>& K2Node_MakeArray_Array, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UITM_Loadout_ItemWindow_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UPlayerCharacterID* CallFunc_GetClassFromPlayerState_SelectedCharacter, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_ToggleShowUpgradeExtraDetails_ReturnValue, On Unhovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_4, UITM_Loadout_ItemWindow_C* K2Node_CustomEvent_Item_2, UITM_Loadout_ItemWindow_C* K2Node_CustomEvent_Item_1, bool CallFunc_IsValid_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess_2, UITM_Loadout_ItemWindow_C* K2Node_CustomEvent_Item, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue_2, TSubclassOf<AActor> CallFunc_GetSelectedItem_ItemClass, EItemCategory CallFunc_GetSelectedItem_Item_Category, UITM_Loadout_ItemWindow_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void CharacterSelected__DelegateSignature();
}

#endif
