#ifndef UE4SS_SDK_ScreenOverlay_ShieldDamage_HPP
#define UE4SS_SDK_ScreenOverlay_ShieldDamage_HPP

class UScreenOverlay_ShieldDamage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* SplatImage;
    float Duration;
    float Time;
    FLinearColor Color;
    FLinearColor StartColor;
    class APlayerCharacter* Player;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnArmorDamaged(float Amount);
    void Begin Splat(float Duration, FLinearColor Color);
    void Construct();
    void OnCharacterStateChanged(ECharacterState NewState);
    void End Splat();
    void OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    void ExecuteUbergraph_ScreenOverlay_ShieldDamage(int32 EntryPoint);
};

#endif
