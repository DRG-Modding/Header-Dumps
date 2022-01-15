#ifndef UE4SS_SDK_ITM_HackingTool_HPP
#define UE4SS_SDK_ITM_HackingTool_HPP

class AITM_HackingTool_C : UHackingToolItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponent* Widget;
    UStaticMeshComponent* StaticMesh;
    UFirstPersonWidgetComponent* FirstPersonWidget;
    UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    UUI_HackingTool_Controller_C* HackingControllerWidget;

    void AudioOnFail(USoundCue* InFailCue, UDialogDataAsset* InShout);
    void ReceiveHackingStarted();
    void OnHackingCompleted(bool InSuccess);
    void ReceiveClick();
    void OnRequestUnequip();
    void RecieveUnequipped();
    void ExecuteUbergraph_ITM_HackingTool(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, HackingUnequipDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool K2Node_CustomEvent_InSuccess, UUI_HackingTool_Controller_C* K2Node_DynamicCast_AsUI_Hacking_Tool_Controller, bool K2Node_DynamicCast_bSuccess, HackingCompleteDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, HackingFailDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2);
}

#endif
