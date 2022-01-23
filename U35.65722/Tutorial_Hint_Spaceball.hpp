#ifndef UE4SS_SDK_Tutorial_Hint_Spaceball_HPP
#define UE4SS_SDK_Tutorial_Hint_Spaceball_HPP

class UTutorial_Hint_Spaceball_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UResourceData* ResourceType;
    class UCappedResource* Resource;

    void ReceiveOnHidden();
    void ReceiveOnInitialized();
    void OnUse(class UUsableComponentBase* Component);
    void ExecuteUbergraph_Tutorial_Hint_Spaceball(int32 EntryPoint, FExecuteUbergraph_Tutorial_Hint_SpaceballK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UUsableComponentBase* K2Node_CustomEvent_component, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Spacerig_Spaceball_C* K2Node_DynamicCast_AsBP_Spacerig_Spaceball, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue);
};

#endif
