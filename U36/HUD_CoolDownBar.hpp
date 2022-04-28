#ifndef UE4SS_SDK_HUD_CoolDownBar_HPP
#define UE4SS_SDK_HUD_CoolDownBar_HPP

class UHUD_CoolDownBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Progress100;
    class UImage* Progress25;
    class UImage* Progress50;
    class UImage* Progress75;
    TArray<class UImage*> ProgressImages;
    class UCoolDownItemAggregator* CoolDownAggregator;
    int32 OldProgress;
    int32 CurrentProgress;

    void Initialize(class UCoolDownItemAggregator* CoolDown);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ProgressSound();
    void ExecuteUbergraph_HUD_CoolDownBar(int32 EntryPoint);
};

#endif
