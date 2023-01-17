#ifndef UE4SS_SDK_HUD_ThrowCarriable_HPP
#define UE4SS_SDK_HUD_ThrowCarriable_HPP

class UHUD_ThrowCarriable_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProgressBar* HoldingProgressL;
    class UProgressBar* HoldingProgressR;
    class UHorizontalBox* HorizontalBox_0;
    class UInvalidationBox* Invalidation;

    void Construct();
    void OnThrowCarriableProgress_Event(float Progress, float timeToCancel, bool isDone);
    void ExecuteUbergraph_HUD_ThrowCarriable(int32 EntryPoint);
};

#endif
