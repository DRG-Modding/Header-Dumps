#ifndef UE4SS_SDK_Tutorial_Hint_FocusShot_HPP
#define UE4SS_SDK_Tutorial_Hint_FocusShot_HPP

class UTutorial_Hint_FocusShot_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float FirstTimeDelay;
    float AfterUseDelay;
    bool HasUsedFocus;
    float InitializeTime;

    void ReceiveOnInitialized();
    void OnItemEquipped_Event(class AItem* Item);
    void FullyFocusedEvent_Event();
    void ExecuteUbergraph_Tutorial_Hint_FocusShot(int32 EntryPoint);
};

#endif
