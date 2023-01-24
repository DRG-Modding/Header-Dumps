#ifndef UE4SS_SDK_ScreenOverlay_HealthDamage_HPP
#define UE4SS_SDK_ScreenOverlay_HealthDamage_HPP

class UScreenOverlay_HealthDamage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* HealthImage;
    class UImage* SplatImage;
    float FadeDuration;
    float SolidDuration;
    class APlayerCharacter* Player;
    FLinearColor Color;
    FLinearColor StartColor;
    class UPlayerHealthComponent* HealthComponent;

    void CheckForLowHealth(float StartAnimTime);
    void Begin Splat(float Duration, FLinearColor Color);
    void OnDamageTaken_Event(float Amount);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnCharacterStateChanged(ECharacterState NewState);
    void End Splat();
    void Construct();
    void OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    void UpdateBloodColor(bool NewValue);
    void OnUpdateHealthImage(float Health);
    void ExecuteUbergraph_ScreenOverlay_HealthDamage(int32 EntryPoint);
};

#endif
