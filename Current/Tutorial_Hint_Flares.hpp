#ifndef UE4SS_SDK_Tutorial_Hint_Flares_HPP
#define UE4SS_SDK_Tutorial_Hint_Flares_HPP

class UTutorial_Hint_Flares_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float FirstTimeDelay;
    float AfterUseDelay;

    void OnFlareThrown();
    void ReceiveOnHidden();
    void ReceiveOnInitialized();
    void ExecuteUbergraph_Tutorial_Hint_Flares(int32 EntryPoint);
};

#endif
