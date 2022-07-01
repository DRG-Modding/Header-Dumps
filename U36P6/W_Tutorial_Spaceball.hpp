#ifndef UE4SS_SDK_W_Tutorial_Spaceball_HPP
#define UE4SS_SDK_W_Tutorial_Spaceball_HPP

class UW_Tutorial_Spaceball_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void PreConstruct(bool IsDesignTime);
    void OnShown();
    void FinishSpaceballTutorial(class UUsableComponentBase* Component);
    void ExecuteUbergraph_W_Tutorial_Spaceball(int32 EntryPoint);
};

#endif
