#ifndef UE4SS_SDK_Tutorial_Hint_Spaceball_HPP
#define UE4SS_SDK_Tutorial_Hint_Spaceball_HPP

class UTutorial_Hint_Spaceball_C : UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    UResourceData* ResourceType;
    UCappedResource* Resource;

    void ReceiveOnHidden();
    void ReceiveOnInitialized();
    void OnUse(UUsableComponentBase* Component);
    void ExecuteUbergraph_Tutorial_Hint_Spaceball(int32 EntryPoint, BeginUsingDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UUsableComponentBase* K2Node_CustomEvent_component, AActor* CallFunc_GetOwner_ReturnValue, UBP_Spacerig_Spaceball_C* K2Node_DynamicCast_AsBP_Spacerig_Spaceball, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue);
}

#endif
