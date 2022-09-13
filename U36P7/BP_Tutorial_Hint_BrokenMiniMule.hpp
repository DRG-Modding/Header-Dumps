#ifndef UE4SS_SDK_BP_Tutorial_Hint_BrokenMiniMule_HPP
#define UE4SS_SDK_BP_Tutorial_Hint_BrokenMiniMule_HPP

class UBP_Tutorial_Hint_BrokenMiniMule_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveOnInitialized();
    void ReceiveOnShown();
    void ExecuteUbergraph_BP_Tutorial_Hint_BrokenMiniMule(int32 EntryPoint);
};

#endif
