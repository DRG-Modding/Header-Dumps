#ifndef UE4SS_SDK_HUD_PlayerTemperature_HPP
#define UE4SS_SDK_HUD_PlayerTemperature_HPP

class UHUD_PlayerTemperature_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Appear;
    class UWidgetAnimation* Pulse;
    class UWidgetAnimation* fade;
    class UWidgetAnimation* Warning;
    class UImage* Arrow01;
    class UImage* Arrow02;
    class UImage* Arrow03;
    class UVerticalBox* ArrowBox;
    class UImage* BG;
    class UImage* Glow;
    class UImage* Icon_Temp;
    class USizeBox* RootSize;
    class UProgressBar* TempBar;
    TArray<class UImage*> Arrows;
    FLinearColor Tint_Freeze;
    bool Faded;
    FLinearColor Tint_Overheated;

    void SetFaded(bool FadeOut);
    void UpdateTemperature(float InTemperature, float InChange);
    void UpdateArrows();
    void Construct();
    void OnTemperatureChanged(float Temperature, float Change);
    void PreConstruct(bool IsDesignTime);
    void OnTemperatureChangeRate_Event(int32 ChangeRate);
    void ShowTemperature();
    void OnBarVisibilityChanged(bool barVisible);
    void OnTemperatureStateChanged(EPlayerTemperatureState State);
    void ExecuteUbergraph_HUD_PlayerTemperature(int32 EntryPoint);
};

#endif
