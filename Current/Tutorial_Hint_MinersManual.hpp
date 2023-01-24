#ifndef UE4SS_SDK_Tutorial_Hint_MinersManual_HPP
#define UE4SS_SDK_Tutorial_Hint_MinersManual_HPP

class UTutorial_Hint_MinersManual_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float FirstTimeDelay;

    void ReceiveOnInitialized();
    void ExecuteUbergraph_Tutorial_Hint_MinersManual(int32 EntryPoint);
};

#endif
