#ifndef UE4SS_SDK_HUD_ActionHoldProgress_HPP
#define UE4SS_SDK_HUD_ActionHoldProgress_HPP

class UHUD_ActionHoldProgress_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHUD_DefaultLabel_C* ActionText;
    class UProgressBar* HoldingProgress;
    class UInvalidationBox* Invalidation;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnActionHoldProgress(FText Description, float Progress);
    void ExecuteUbergraph_HUD_ActionHoldProgress(int32 EntryPoint);
};

#endif
