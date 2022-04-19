#ifndef UE4SS_SDK_Tutorial_Hint_Nitra_HPP
#define UE4SS_SDK_Tutorial_Hint_Nitra_HPP

class UTutorial_Hint_Nitra_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCappedResource* Resource;
    float MinimumAmount;
    float DelayBeforeActive;

    void OnIncreased_Event(class UCappedResource* Resource, float Amount);
    void ReceiveOnInitialized();
    void ExecuteUbergraph_Tutorial_Hint_Nitra(int32 EntryPoint);
};

#endif
