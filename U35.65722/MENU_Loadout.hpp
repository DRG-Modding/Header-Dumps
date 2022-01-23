#ifndef UE4SS_SDK_MENU_Loadout_HPP
#define UE4SS_SDK_MENU_Loadout_HPP

class UMENU_Loadout_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    class UITM_CharacterSwitcherBar_C* ITM_Loadout_CharSelect;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_0;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_1;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_2;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_13;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_14;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_15;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_16;
    class UITM_Loadout_PerksEquip_C* ITM_Loadout_PerksEquip;
    class UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    class UVerticalBox* VerticalBox_Left;
    class UVerticalBox* VerticalBox_Right;
    FMENU_Loadout_CCharacterSelected CharacterSelected;
    void CharacterSelected();
    TArray<class UITM_Loadout_ItemWindow_C*> LoadoutItems;
    class UITM_Loadout_ItemWindow_C* HoveredItem;
    float FadeInAnimTime;

    void PlayIntroAnimations(int32 Temp_int_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UITM_Loadout_ItemWindow_C* K2Node_DynamicCast_AsITM_Loadout_Item_Window, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue_1, class UITM_Loadout_ItemWindow_C* K2Node_DynamicCast_AsITM_Loadout_Item_Window_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
    void CheckForNotification(bool HasNotification, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue_1, bool CallFunc_IsInItemUINotificationSet_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue_1, bool CallFunc_IsInItemUINotificationSet_ReturnValue_2, class UITM_Loadout_ItemWindow_C* CallFunc_Array_Get_Item, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Handle_Key_Input_ReturnValue, bool CallFunc_Handle_Key_Input_Handled);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    void GetClassFromPlayerState(class UPlayerCharacterID*& SelectedCharacter, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnShown();
    void Refresh();
    void BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(TSubclassOf<class APlayerCharacter> Character);
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
    void On Unhovered_Event(class UITM_Loadout_ItemWindow_C* Item);
    void On Hovered(class UITM_Loadout_ItemWindow_C* Item);
    void Open Item Window(class UITM_Loadout_ItemWindow_C* Item);
    void ExecuteUbergraph_MENU_Loadout(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FExecuteUbergraph_MENU_LoadoutK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_MENU_LoadoutK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_IsDesignTime, TSubclassOf<class APlayerCharacter> K2Node_ComponentBoundEvent_Character, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class ABP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class UITM_Loadout_ItemWindow_C*>& K2Node_MakeArray_Array, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UITM_Loadout_ItemWindow_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPlayerCharacterID* CallFunc_GetClassFromPlayerState_SelectedCharacter, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue_1, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_ToggleShowUpgradeExtraDetails_ReturnValue, FExecuteUbergraph_MENU_LoadoutK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_4, class UITM_Loadout_ItemWindow_C* K2Node_CustomEvent_Item_2, class UITM_Loadout_ItemWindow_C* K2Node_CustomEvent_Item_1, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess_2, class UITM_Loadout_ItemWindow_C* K2Node_CustomEvent_Item, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue_2, TSubclassOf<class AActor> CallFunc_GetSelectedItem_ItemClass, EItemCategory CallFunc_GetSelectedItem_Item_Category, class UITM_Loadout_ItemWindow_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void CharacterSelected__DelegateSignature();
};

#endif
