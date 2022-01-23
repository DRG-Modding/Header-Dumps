#ifndef UE4SS_SDK_ITM_HackingTool_HPP
#define UE4SS_SDK_ITM_HackingTool_HPP

class AITM_HackingTool_C : public AHackingToolItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* StaticMesh;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UUI_HackingTool_Controller_C* HackingControllerWidget;

    void AudioOnFail(class USoundCue* InFailCue, class UDialogDataAsset* InShout);
    void ReceiveHackingStarted();
    void OnHackingCompleted(bool InSuccess);
    void ReceiveClick();
    void OnRequestUnequip();
    void RecieveUnequipped();
    void ExecuteUbergraph_ITM_HackingTool(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_ITM_HackingToolK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool K2Node_CustomEvent_InSuccess, class UUI_HackingTool_Controller_C* K2Node_DynamicCast_AsUI_Hacking_Tool_Controller, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_ITM_HackingToolK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_ITM_HackingToolK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2);
};

#endif
