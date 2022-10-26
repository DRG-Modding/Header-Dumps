#ifndef UE4SS_SDK_HUD_EnemyTargeting_Temperature_HPP
#define UE4SS_SDK_HUD_EnemyTargeting_Temperature_HPP

class UHUD_EnemyTargeting_Temperature_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UWidgetAnimation* Ping;
    class USizeBox* BarSize;
    class UImage* BorderInner;
    class UImage* BorderOuter;
    class UImage* TemperatureIcon;
    class UProgressBar* TemperatureProgress;
    float Size;
    float Effect;

    void SetColors(FLinearColor Fill Color, FLinearColor BackgroundColor, bool Revert);
    void SetTemperatureEffect(float InEffect, bool Reset);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_EnemyTargeting_Temperature(int32 EntryPoint);
};

#endif
