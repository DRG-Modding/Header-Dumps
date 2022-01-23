#ifndef UE4SS_SDK_BP_PlayerCameraDrone_HPP
#define UE4SS_SDK_BP_PlayerCameraDrone_HPP

class ABP_PlayerCameraDrone_C : public APlayerCameraDrone
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* collider;
    class USpotLightComponent* SpotLight;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh;
    class UCameraComponent* Camera;
    bool Visible;
    FBP_PlayerCameraDrone_CCreateQuickCheatMenu CreateQuickCheatMenu;
    void CreateQuickCheatMenu();
    class UWindowWidget* CheatMenu;
    class UWindowWidget* MovieModeWindow;
    class UWindowWidget* QuickCheatMenu;
    int32 CheatCounter;
    int32 QuickCheatCounter;
    int32 MovieModeCounter;

    void InpActEvt_Eight_K2Node_InputKeyEvent_14(FKey Key);
    void InpActEvt_Nine_K2Node_InputKeyEvent_13(FKey Key);
    void InpActEvt_Add_K2Node_InputKeyEvent_12(FKey Key);
    void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_11(FKey Key);
    void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_10(FKey Key);
    void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_9(FKey Key);
    void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_0(FKey Key);
    void SetDroneVisiblity();
    void CreateHUD();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PlayerCameraDrone(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FKey Temp_struct_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, FKey Temp_struct_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, FKey K2Node_InputKeyEvent_Key, FKey K2Node_InputKeyEvent_Key_6, FKey K2Node_InputKeyEvent_Key_1, FKey K2Node_InputKeyEvent_Key_7, int32 Temp_int_Variable_3, FKey Temp_struct_Variable_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, FKey K2Node_InputKeyEvent_Key_8, FKey Temp_struct_Variable_3, FKey K2Node_InputKeyEvent_Key_2, FKey K2Node_InputKeyEvent_Key_3, FKey K2Node_InputKeyEvent_Key_9, int32 Temp_int_Variable_4, FKey Temp_struct_Variable_4, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, FKey K2Node_InputKeyEvent_Key_10, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, FKey K2Node_InputKeyEvent_Key_11, FKey K2Node_InputKeyEvent_Key_12, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, TSubclassOf<class UWindowWidget> CallFunc_LoadWindowWidgetClass_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWindowWidget* CallFunc_Create_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, FKey Temp_struct_Variable_5, FKey K2Node_InputKeyEvent_Key_4, bool CallFunc_IsValid_ReturnValue_1, TSubclassOf<class UWindowWidget> CallFunc_LoadWindowWidgetClass_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, class UWindowWidget* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, FKey K2Node_InputKeyEvent_Key_5, int32 CallFunc_Subtract_IntInt_ReturnValue_1, FKey K2Node_InputKeyEvent_Key_13, int32 Temp_int_Variable_5, class UHUD_PlayerDrone_C* CallFunc_Create_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, FKey K2Node_InputKeyEvent_Key_14, class UMenu_MovieMode_C* CallFunc_Create_ReturnValue_3);
    void CreateQuickCheatMenu__DelegateSignature();
};

#endif
