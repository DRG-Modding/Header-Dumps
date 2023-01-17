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
    void ExecuteUbergraph_Tutorial_Hint_Spaceball(int32 EntryPoint);
};

#endif
