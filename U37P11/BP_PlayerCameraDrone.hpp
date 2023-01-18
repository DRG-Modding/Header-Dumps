#ifndef UE4SS_SDK_BP_PlayerCameraDrone_HPP
#define UE4SS_SDK_BP_PlayerCameraDrone_HPP

class ABP_PlayerCameraDrone_C : public APlayerCameraDrone
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
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
    void ExecuteUbergraph_BP_PlayerCameraDrone(int32 EntryPoint);
    void CreateQuickCheatMenu__DelegateSignature();
};

#endif
