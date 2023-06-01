#ifndef UE4SS_SDK_ScreenOverlay_Plague_Build_HPP
#define UE4SS_SDK_ScreenOverlay_Plague_Build_HPP

class UScreenOverlay_Plague_Build_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimJitter;
    class UWidgetAnimation* AnimPulse;
    class UWidgetAnimation* AnimFading;
    class UImage* AfflictionImage;
    FLinearColor Color;
    class APlayerCharacter* Player;
    float Timer;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnCharacterStateChanged(ECharacterState NewState);
    void End Splat();
    void OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    void ExecuteUbergraph_ScreenOverlay_Plague_Build(int32 EntryPoint);
};

#endif
