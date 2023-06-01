#ifndef UE4SS_SDK_HUD_Directional_Damage_IndicatorV2_HPP
#define UE4SS_SDK_HUD_Directional_Damage_IndicatorV2_HPP

class UHUD_Directional_Damage_IndicatorV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* DamageImage;
    class AActor* DamageCauser;
    FVector DamageOrigin;
    class APlayerCharacter* Character;
    TArray<FVector> DamagePoints;
    class UMaterialInstanceDynamic* DamageIndicatorMat;
    float TotalPointTime;
    float FadeTime;
    int32 MaxNumberOfPoints;
    TArray<class AActor*> Enemies;

    void UpdatePoints();
    float CalcFadeStrength(float TimeLeft, float HitSize);
    void OnHit(float Damage, FDamageData& DamageData, bool anyHealthLost);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2(int32 EntryPoint);
};

#endif
