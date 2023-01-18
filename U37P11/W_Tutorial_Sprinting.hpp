#ifndef UE4SS_SDK_W_Tutorial_Sprinting_HPP
#define UE4SS_SDK_W_Tutorial_Sprinting_HPP

class UW_Tutorial_Sprinting_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_TutorialTriggerManager_C* manager;

    void OnShown();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_Tutorial_Sprinting(int32 EntryPoint);
};

#endif
