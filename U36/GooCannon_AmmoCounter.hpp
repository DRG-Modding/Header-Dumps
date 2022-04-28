#ifndef UE4SS_SDK_GooCannon_AmmoCounter_HPP
#define UE4SS_SDK_GooCannon_AmmoCounter_HPP

class UGooCannon_AmmoCounter_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AmmoCritical;
    class UImage* BG;
    class UTextBlock* ClipCount;
    class UTextBlock* TotalCount;
    class UImage* WarningOverlay;
    int32 ActualClipCount;
    int32 AnimatedClipCount;
    FTimerHandle CountHandle;

    void UpdateClipCount();
    void UpdateAmmoCritical();
    void SetNumber(int32 Value, class UTextBlock* Label, int32& OutValue);
    void SetTotalCount(int32 Value);
    void Construct();
    void SetClipCount(int32 Value);
    void ExecuteUbergraph_GooCannon_AmmoCounter(int32 EntryPoint);
};

#endif
